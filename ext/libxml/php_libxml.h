/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Shane Caraveo <shane@php.net>                               |
   |          Wez Furlong <wez@thebrainroom.com>                          |
   +----------------------------------------------------------------------+
*/

#ifndef PHP_LIBXML_H
#define PHP_LIBXML_H

#ifdef HAVE_LIBXML
extern zend_module_entry libxml_module_entry;
#define libxml_module_ptr &libxml_module_entry

#include "php_version.h"
#define PHP_LIBXML_VERSION PHP_VERSION

#ifdef PHP_WIN32
#	define PHP_LIBXML_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_LIBXML_API __attribute__ ((visibility("default")))
#else
#	define PHP_LIBXML_API
#endif

#include "zend_smart_str.h"
#include <libxml/tree.h>
#include <libxml/parser.h>

#define LIBXML_SAVE_NOEMPTYTAG 1<<2

#define LIBXML_NS_TAG_HOOK 1

ZEND_BEGIN_MODULE_GLOBALS(libxml)
	zval stream_context;
	smart_str error_buffer;
	zend_llist *error_list;
	zend_fcall_info_cache entity_loader_callback;
	bool entity_loader_disabled;
ZEND_END_MODULE_GLOBALS(libxml)

typedef struct _libxml_doc_props {
	HashTable *classmap;
	bool formatoutput;
	bool validateonparse;
	bool resolveexternals;
	bool preservewhitespace;
	bool substituteentities;
	bool stricterror;
	bool recover;
} libxml_doc_props;

/* Modification tracking: when the object changes, we increment its counter.
 * When this counter no longer matches the counter at the time of caching,
 * we know that the object has changed and we have to update the cache. */
typedef struct {
	size_t modification_nr;
} php_libxml_cache_tag;

typedef struct php_libxml_private_data_header {
	void (*dtor)(struct php_libxml_private_data_header *);
	void (*ns_hook)(struct php_libxml_private_data_header *, xmlNodePtr);
	/* extra fields */
} php_libxml_private_data_header;

/**
 * It's possible to set custom handlers for certain actions depending on the type of document.
 * For example, there exist multiple ways to serialize an XML document,
 * therefore this structure allows setting up a custom handler.
 */
typedef struct php_libxml_document_handlers {
	zend_string *(*dump_node_to_str)(xmlDocPtr doc, xmlNodePtr node, bool format, const char *encoding);
	zend_string *(*dump_doc_to_str)(xmlDocPtr doc, int options, const char *encoding);
	zend_long (*dump_node_to_file)(const char *filename, xmlDocPtr doc, xmlNodePtr node, bool format, const char *encoding);
	zend_long (*dump_doc_to_file)(const char *filename, xmlDocPtr doc, bool format, const char *encoding);
} php_libxml_document_handlers;

/**
 * Multiple representations are possible of the same underlying node data.
 * This is the case for example when a SimpleXML node is imported into DOM.
 * It must not be possible to obtain both a legacy and a modern representation
 * of the same node, as they have different assumptions. The class_type field
 * allows us to pin the representation to one of the two. If it is unset, no
 * representation has been forced upon the node yet, and thus no assumptions
 * have yet been made. This is the case for example when a SimpleXML node is
 * created by SimpleXML itself and never leaves SimpleXML.
 */
typedef enum _php_libxml_class_type {
	PHP_LIBXML_CLASS_UNSET = 0,
	PHP_LIBXML_CLASS_LEGACY = 1,
	PHP_LIBXML_CLASS_MODERN = 2,
} php_libxml_class_type;

typedef enum php_libxml_quirks_mode {
	PHP_LIBXML_NO_QUIRKS = 0,
	PHP_LIBXML_QUIRKS,
	PHP_LIBXML_LIMITED_QUIRKS,
} php_libxml_quirks_mode;

typedef struct _php_libxml_ref_obj {
	void *ptr;
	libxml_doc_props *doc_props;
	php_libxml_cache_tag cache_tag;
	php_libxml_private_data_header *private_data;
	const php_libxml_document_handlers *handlers;
	unsigned int refcount;
	php_libxml_class_type class_type : 8;
	php_libxml_quirks_mode quirks_mode : 8;
} php_libxml_ref_obj;

typedef struct _php_libxml_node_ptr {
	xmlNodePtr node;
	unsigned int refcount;
	void *_private;
} php_libxml_node_ptr;

typedef struct _php_libxml_node_object {
	php_libxml_node_ptr *node;
	php_libxml_ref_obj *document;
	zend_object  std;
} php_libxml_node_object;


static inline php_libxml_node_object *php_libxml_node_fetch_object(zend_object *obj) {
	return (php_libxml_node_object *)((char*)(obj) - obj->handlers->offset);
}

static zend_always_inline void php_libxml_invalidate_cache_tag(php_libxml_cache_tag *cache_tag)
{
#if SIZEOF_SIZE_T == 8
	/* If one operation happens every nanosecond, then it would still require 584 years to overflow
	 * the counter. So we'll just assume this never happens. */
	cache_tag->modification_nr++;
#else
	size_t new_modification_nr = cache_tag->modification_nr + 1;
	if (EXPECTED(new_modification_nr > 0)) { /* unsigned overflow; checking after addition results in one less instruction */
		cache_tag->modification_nr = new_modification_nr;
	}
#endif
}

static zend_always_inline bool php_libxml_is_cache_tag_stale(const php_libxml_cache_tag *object_tag, const php_libxml_cache_tag *cache_tag)
{
	ZEND_ASSERT(object_tag != NULL);
	ZEND_ASSERT(cache_tag != NULL);
	/* See overflow comment in php_libxml_invalidate_node_list_cache(). */
#if SIZEOF_SIZE_T == 8
	return cache_tag->modification_nr != object_tag->modification_nr;
#else
	return cache_tag->modification_nr != object_tag->modification_nr || UNEXPECTED(object_tag->modification_nr == SIZE_MAX);
#endif
}

static zend_always_inline void php_libxml_invalidate_node_list_cache(php_libxml_ref_obj *doc_ptr)
{
	if (doc_ptr) {
		php_libxml_invalidate_cache_tag(&doc_ptr->cache_tag);
	}
}

static zend_always_inline void php_libxml_invalidate_node_list_cache_from_doc(xmlDocPtr docp)
{
	if (docp && docp->_private) { /* docp is NULL for detached nodes */
		php_libxml_node_ptr *node_private = (php_libxml_node_ptr *) docp->_private;
		php_libxml_node_object *object_private = (php_libxml_node_object *) node_private->_private;
		if (object_private) {
			php_libxml_invalidate_node_list_cache(object_private->document);
		}
	}
}

#define Z_LIBXML_NODE_P(zv) php_libxml_node_fetch_object(Z_OBJ_P((zv)))

typedef void * (*php_libxml_export_node) (zval *object);

typedef enum {
	PHP_LIBXML_ERROR = 0,
	PHP_LIBXML_CTX_ERROR = 1,
	PHP_LIBXML_CTX_WARNING = 2,
} php_libxml_error_level;

PHP_LIBXML_API unsigned int php_libxml_increment_node_ptr(php_libxml_node_object *object, xmlNodePtr node, void *private_data);
PHP_LIBXML_API unsigned int php_libxml_decrement_node_ptr(php_libxml_node_object *object);
PHP_LIBXML_API unsigned int php_libxml_decrement_node_ptr_ref(php_libxml_node_ptr *ptr);
PHP_LIBXML_API unsigned int php_libxml_increment_doc_ref(php_libxml_node_object *object, xmlDocPtr docp);
PHP_LIBXML_API unsigned int php_libxml_decrement_doc_ref_directly(php_libxml_ref_obj *document);
PHP_LIBXML_API unsigned int php_libxml_decrement_doc_ref(php_libxml_node_object *object);
PHP_LIBXML_API xmlNodePtr php_libxml_import_node(zval *object);
PHP_LIBXML_API zval *php_libxml_register_export(const zend_class_entry *ce, php_libxml_export_node export_function);
/* When an explicit freeing of node and children is required */
PHP_LIBXML_API void php_libxml_node_free_list(xmlNodePtr node);
PHP_LIBXML_API void php_libxml_node_free_resource(xmlNodePtr node);
/* When object dtor is called as node may still be referenced */
PHP_LIBXML_API void php_libxml_node_decrement_resource(php_libxml_node_object *object);
PHP_LIBXML_API void php_libxml_error_handler(void *ctx, const char *msg, ...);
PHP_LIBXML_API void php_libxml_ctx_warning(void *ctx, const char *msg, ...);
PHP_LIBXML_API void php_libxml_pretend_ctx_error_ex(const char *file, int line, int column, const char *msg,...);
PHP_LIBXML_API void php_libxml_ctx_error(void *ctx, const char *msg, ...);
PHP_LIBXML_API void php_libxml_error_handler_va(php_libxml_error_level error_type, void *ctx, const char *msg, va_list args);
PHP_LIBXML_API void php_libxml_switch_context(const zval *context, zval *oldcontext);
PHP_LIBXML_API void php_libxml_issue_error(int level, const char *msg);
PHP_LIBXML_API bool php_libxml_disable_entity_loader(bool disable);
PHP_LIBXML_API void php_libxml_set_old_ns(xmlDocPtr doc, xmlNsPtr ns);
PHP_LIBXML_API php_stream_context *php_libxml_get_stream_context(void);
PHP_LIBXML_API bool php_libxml_uses_internal_errors(void);

PHP_LIBXML_API xmlChar *php_libxml_attr_value(const xmlAttr *attr, bool *free);

PHP_LIBXML_API zend_string *php_libxml_sniff_charset_from_string(const char *start, const char *end);
PHP_LIBXML_API zend_string *php_libxml_sniff_charset_from_stream(const php_stream *s);

/* Init/shutdown functions*/
PHP_LIBXML_API void php_libxml_initialize(void);
PHP_LIBXML_API void php_libxml_shutdown(void);

#define LIBXML(v) ZEND_MODULE_GLOBALS_ACCESSOR(libxml, v)

#if defined(ZTS) && defined(COMPILE_DL_LIBXML)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

/* Other extension may override the global state options, these global options
 * are copied initially to ctxt->options. Set the options to a known good value.
 * See libxml2 globals.c and parserInternals.c.
 * The unique_name argument allows multiple sanitizes and restores within the
 * same function, even nested is necessary. */
# define PHP_LIBXML_SANITIZE_GLOBALS(unique_name) \
	ZEND_DIAGNOSTIC_IGNORED_START("-Wdeprecated-declarations") \
	int xml_old_loadsubset_##unique_name = xmlLoadExtDtdDefaultValue; \
	xmlLoadExtDtdDefaultValue = 0; \
	int xml_old_validate_##unique_name = xmlDoValidityCheckingDefaultValue; \
	xmlDoValidityCheckingDefaultValue = 0; \
	int xml_old_pedantic_##unique_name = xmlPedanticParserDefault(0); \
	int xml_old_substitute_##unique_name = xmlSubstituteEntitiesDefault(0); \
	int xml_old_linenrs_##unique_name = xmlLineNumbersDefault(0); \
	int xml_old_blanks_##unique_name = xmlKeepBlanksDefault(1); \
	ZEND_DIAGNOSTIC_IGNORED_END

# define PHP_LIBXML_RESTORE_GLOBALS(unique_name) \
	ZEND_DIAGNOSTIC_IGNORED_START("-Wdeprecated-declarations") \
	xmlLoadExtDtdDefaultValue = xml_old_loadsubset_##unique_name; \
	xmlDoValidityCheckingDefaultValue = xml_old_validate_##unique_name; \
	(void) xmlPedanticParserDefault(xml_old_pedantic_##unique_name); \
	(void) xmlSubstituteEntitiesDefault(xml_old_substitute_##unique_name); \
	(void) xmlLineNumbersDefault(xml_old_linenrs_##unique_name); \
	(void) xmlKeepBlanksDefault(xml_old_blanks_##unique_name); \
	ZEND_DIAGNOSTIC_IGNORED_END

/* Alternative for above, working directly on the context and not setting globals.
 * Generally faster because no locking is involved, and this has the advantage that it sets the options to a known good value. */
static zend_always_inline void php_libxml_sanitize_parse_ctxt_options(xmlParserCtxtPtr ctxt)
{
	ZEND_DIAGNOSTIC_IGNORED_START("-Wdeprecated-declarations") \
	ctxt->loadsubset = 0;
	ctxt->validate = 0;
	ctxt->pedantic = 0;
	ctxt->replaceEntities = 0;
	ctxt->linenumbers = 0;
	ctxt->keepBlanks = 1;
	ctxt->options = 0;
	ZEND_DIAGNOSTIC_IGNORED_END
}
#endif

#define phpext_libxml_ptr libxml_module_ptr

#endif /* PHP_LIBXML_H */
