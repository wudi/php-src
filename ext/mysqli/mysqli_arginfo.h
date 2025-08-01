/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 2547f63fd024fd5f4fecc574bbcff1301d1d36e5 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_affected_rows, 0, 1, MAY_BE_LONG|MAY_BE_STRING)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_autocommit, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_begin_transaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_change_user, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, database, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_character_set_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_close, 0, 1, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_commit arginfo_mysqli_begin_transaction

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_connect, 0, 0, mysqli, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hostname, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, username, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, database, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, socket, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_connect_errno, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_connect_error, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_data_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_dump_debug_info, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_debug, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_errno, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_error arginfo_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_error_list, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_execute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_mysqli_execute arginfo_mysqli_stmt_execute

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_execute_query, 0, 2, mysqli_result, MAY_BE_BOOL)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_fetch_field, 0, 1, MAY_BE_OBJECT|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_fetch_fields, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_fetch_field_direct, 0, 2, MAY_BE_OBJECT|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_fetch_lengths, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_fetch_all, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "MYSQLI_NUM")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_fetch_array, 0, 1, MAY_BE_ARRAY|MAY_BE_NULL|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "MYSQLI_BOTH")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_fetch_assoc, 0, 1, MAY_BE_ARRAY|MAY_BE_NULL|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_fetch_object, 0, 1, MAY_BE_OBJECT|MAY_BE_NULL|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, class, IS_STRING, 0, "\"stdClass\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, constructor_args, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_mysqli_fetch_row arginfo_mysqli_fetch_assoc

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_fetch_column, 0, 1, MAY_BE_NULL|MAY_BE_LONG|MAY_BE_DOUBLE|MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, column, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_mysqli_field_count arginfo_mysqli_errno

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_field_seek, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_field_tell, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_free_result, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_get_connection_stats arginfo_mysqli_error_list

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_get_client_stats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_get_charset, 0, 1, IS_OBJECT, 1)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_get_client_info, 0, 0, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, mysql, mysqli, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_mysqli_get_client_version arginfo_mysqli_connect_errno

#define arginfo_mysqli_get_links_stats arginfo_mysqli_get_client_stats

#define arginfo_mysqli_get_host_info arginfo_mysqli_character_set_name

#define arginfo_mysqli_get_proto_info arginfo_mysqli_errno

#define arginfo_mysqli_get_server_info arginfo_mysqli_character_set_name

#define arginfo_mysqli_get_server_version arginfo_mysqli_errno

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_get_warnings, 0, 1, mysqli_warning, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_init, 0, 0, mysqli, MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_info, 0, 1, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_insert_id arginfo_mysqli_affected_rows

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_kill, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, process_id, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_more_results arginfo_mysqli_dump_debug_info

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_multi_query, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_next_result arginfo_mysqli_dump_debug_info

#define arginfo_mysqli_num_fields arginfo_mysqli_field_tell

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_num_rows, 0, 1, MAY_BE_LONG|MAY_BE_STRING)
	ZEND_ARG_OBJ_INFO(0, result, mysqli_result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_options, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_set_opt arginfo_mysqli_options

#define arginfo_mysqli_ping arginfo_mysqli_dump_debug_info

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_poll, 0, 4, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(1, read, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(1, error, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(1, reject, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, microseconds, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_prepare, 0, 2, mysqli_stmt, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_report, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_query, 0, 2, mysqli_result, MAY_BE_BOOL)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, result_mode, IS_LONG, 0, "MYSQLI_STORE_RESULT")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_real_connect, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hostname, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, username, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, database, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, socket, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_real_escape_string, 0, 2, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_escape_string arginfo_mysqli_real_escape_string

#define arginfo_mysqli_real_query arginfo_mysqli_multi_query

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_reap_async_query, 0, 1, mysqli_result, MAY_BE_BOOL)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_release_savepoint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_rollback arginfo_mysqli_begin_transaction

#define arginfo_mysqli_savepoint arginfo_mysqli_release_savepoint

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_select_db, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, database, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_set_charset, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_stmt_affected_rows, 0, 1, MAY_BE_LONG|MAY_BE_STRING)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_attr_get, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_attr_set, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_bind_param, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, types, IS_STRING, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO(1, vars, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_bind_result, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO(1, vars, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_close, 0, 1, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_data_seek, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_errno, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_error, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_error_list, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_fetch, 0, 1, _IS_BOOL, 1)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_field_count arginfo_mysqli_stmt_errno

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_free_result, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_stmt_get_result, 0, 1, mysqli_result, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_stmt_get_warnings, 0, 1, mysqli_warning, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_stmt_init, 0, 1, mysqli_stmt, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_insert_id arginfo_mysqli_stmt_affected_rows

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_more_results, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_next_result arginfo_mysqli_stmt_more_results

#define arginfo_mysqli_stmt_num_rows arginfo_mysqli_stmt_affected_rows

#define arginfo_mysqli_stmt_param_count arginfo_mysqli_stmt_errno

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_prepare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_reset arginfo_mysqli_stmt_more_results

#define arginfo_mysqli_stmt_result_metadata arginfo_mysqli_stmt_get_result

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_stmt_send_long_data, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, statement, mysqli_stmt, 0)
	ZEND_ARG_TYPE_INFO(0, param_num, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_stmt_store_result arginfo_mysqli_stmt_more_results

#define arginfo_mysqli_stmt_sqlstate arginfo_mysqli_stmt_error

#define arginfo_mysqli_sqlstate arginfo_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_ssl_set, 0, 6, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, certificate, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, ca_certificate, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, ca_path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, cipher_algos, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mysqli_stat, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_store_result, 0, 1, mysqli_result, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_mysqli_thread_id arginfo_mysqli_errno

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_thread_safe, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_mysqli_use_result, 0, 1, mysqli_result, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
ZEND_END_ARG_INFO()

#define arginfo_mysqli_warning_count arginfo_mysqli_errno

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mysqli_refresh, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hostname, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, username, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, database, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, socket, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_autocommit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_begin_transaction, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_change_user, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, username, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, database, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_character_set_name, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_close, 0, 0, IS_TRUE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_commit arginfo_class_mysqli_begin_transaction

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_connect, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hostname, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, username, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, database, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, socket, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_dump_debug_info, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_debug, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_get_charset, 0, 0, IS_OBJECT, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_execute_query, 0, 1, mysqli_result, MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_get_client_info arginfo_class_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_get_connection_stats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_get_server_info arginfo_class_mysqli_character_set_name

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_get_warnings, 0, 0, mysqli_warning, MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_init, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_kill, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, process_id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_multi_query, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_more_results arginfo_class_mysqli_dump_debug_info

#define arginfo_class_mysqli_next_result arginfo_class_mysqli_dump_debug_info

#define arginfo_class_mysqli_ping arginfo_class_mysqli_dump_debug_info

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_poll, 0, 4, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(1, read, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(1, error, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(1, reject, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, microseconds, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_prepare, 0, 1, mysqli_stmt, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_query, 0, 1, mysqli_result, MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, result_mode, IS_LONG, 0, "MYSQLI_STORE_RESULT")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_real_connect, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hostname, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, username, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, database, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, socket, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_real_escape_string, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_reap_async_query, 0, 0, mysqli_result, MAY_BE_BOOL)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_escape_string arginfo_class_mysqli_real_escape_string

#define arginfo_class_mysqli_real_query arginfo_class_mysqli_multi_query

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_release_savepoint, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_rollback arginfo_class_mysqli_begin_transaction

#define arginfo_class_mysqli_savepoint arginfo_class_mysqli_release_savepoint

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_select_db, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, database, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_set_charset, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, charset, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_options, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_set_opt arginfo_class_mysqli_options

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_ssl_set, 0, 5, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, certificate, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, ca_certificate, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, ca_path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, cipher_algos, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_stat, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_stmt_init, 0, 0, mysqli_stmt, MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_store_result, 0, 0, mysqli_result, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_thread_safe arginfo_class_mysqli_dump_debug_info

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_mysqli_use_result, 0, 0, mysqli_result, MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_refresh, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_result___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, result_mode, IS_LONG, 0, "MYSQLI_STORE_RESULT")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_close, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_free arginfo_class_mysqli_result_close

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_data_seek, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_result_fetch_field, 0, 0, MAY_BE_OBJECT|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_fetch_fields arginfo_class_mysqli_get_connection_stats

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_result_fetch_field_direct, 0, 1, MAY_BE_OBJECT|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_fetch_all, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "MYSQLI_NUM")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_result_fetch_array, 0, 0, MAY_BE_ARRAY|MAY_BE_NULL|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "MYSQLI_BOTH")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_result_fetch_assoc, 0, 0, MAY_BE_ARRAY|MAY_BE_NULL|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_result_fetch_object, 0, 0, MAY_BE_OBJECT|MAY_BE_NULL|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, class, IS_STRING, 0, "\"stdClass\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, constructor_args, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_fetch_row arginfo_class_mysqli_result_fetch_assoc

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_result_fetch_column, 0, 0, MAY_BE_NULL|MAY_BE_LONG|MAY_BE_DOUBLE|MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, column, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_result_field_seek, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_result_free_result arginfo_class_mysqli_result_close

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_mysqli_result_getIterator, 0, 0, Iterator, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_mysqli_stmt___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, mysql, mysqli, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, query, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_attr_get, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_attr_set, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_bind_param, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, types, IS_STRING, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO(1, vars, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_bind_result, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO(1, vars, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_stmt_close arginfo_class_mysqli_close

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_data_seek, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_execute, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_fetch, 0, 0, _IS_BOOL, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_stmt_get_warnings arginfo_class_mysqli_get_warnings

#define arginfo_class_mysqli_stmt_result_metadata arginfo_class_mysqli_use_result

#define arginfo_class_mysqli_stmt_more_results arginfo_class_mysqli_dump_debug_info

#define arginfo_class_mysqli_stmt_next_result arginfo_class_mysqli_dump_debug_info

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_mysqli_stmt_num_rows, 0, 0, MAY_BE_LONG|MAY_BE_STRING)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_stmt_send_long_data, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, param_num, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_mysqli_stmt_free_result arginfo_class_mysqli_result_close

#define arginfo_class_mysqli_stmt_reset arginfo_class_mysqli_dump_debug_info

#define arginfo_class_mysqli_stmt_prepare arginfo_class_mysqli_multi_query

#define arginfo_class_mysqli_stmt_store_result arginfo_class_mysqli_dump_debug_info

#define arginfo_class_mysqli_stmt_get_result arginfo_class_mysqli_use_result

#define arginfo_class_mysqli_warning___construct arginfo_class_mysqli_init

#define arginfo_class_mysqli_warning_next arginfo_mysqli_thread_safe

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_mysqli_sql_exception_getSqlState, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(mysqli_affected_rows);
ZEND_FUNCTION(mysqli_autocommit);
ZEND_FUNCTION(mysqli_begin_transaction);
ZEND_FUNCTION(mysqli_change_user);
ZEND_FUNCTION(mysqli_character_set_name);
ZEND_FUNCTION(mysqli_close);
ZEND_FUNCTION(mysqli_commit);
ZEND_FUNCTION(mysqli_connect);
ZEND_FUNCTION(mysqli_connect_errno);
ZEND_FUNCTION(mysqli_connect_error);
ZEND_FUNCTION(mysqli_data_seek);
ZEND_FUNCTION(mysqli_dump_debug_info);
ZEND_FUNCTION(mysqli_debug);
ZEND_FUNCTION(mysqli_errno);
ZEND_FUNCTION(mysqli_error);
ZEND_FUNCTION(mysqli_error_list);
ZEND_FUNCTION(mysqli_stmt_execute);
ZEND_FUNCTION(mysqli_execute_query);
ZEND_FUNCTION(mysqli_fetch_field);
ZEND_FUNCTION(mysqli_fetch_fields);
ZEND_FUNCTION(mysqli_fetch_field_direct);
ZEND_FUNCTION(mysqli_fetch_lengths);
ZEND_FUNCTION(mysqli_fetch_all);
ZEND_FUNCTION(mysqli_fetch_array);
ZEND_FUNCTION(mysqli_fetch_assoc);
ZEND_FUNCTION(mysqli_fetch_object);
ZEND_FUNCTION(mysqli_fetch_row);
ZEND_FUNCTION(mysqli_fetch_column);
ZEND_FUNCTION(mysqli_field_count);
ZEND_FUNCTION(mysqli_field_seek);
ZEND_FUNCTION(mysqli_field_tell);
ZEND_FUNCTION(mysqli_free_result);
ZEND_FUNCTION(mysqli_get_connection_stats);
ZEND_FUNCTION(mysqli_get_client_stats);
ZEND_FUNCTION(mysqli_get_charset);
ZEND_FUNCTION(mysqli_get_client_info);
ZEND_FUNCTION(mysqli_get_client_version);
ZEND_FUNCTION(mysqli_get_links_stats);
ZEND_FUNCTION(mysqli_get_host_info);
ZEND_FUNCTION(mysqli_get_proto_info);
ZEND_FUNCTION(mysqli_get_server_info);
ZEND_FUNCTION(mysqli_get_server_version);
ZEND_FUNCTION(mysqli_get_warnings);
ZEND_FUNCTION(mysqli_init);
ZEND_FUNCTION(mysqli_info);
ZEND_FUNCTION(mysqli_insert_id);
ZEND_FUNCTION(mysqli_kill);
ZEND_FUNCTION(mysqli_more_results);
ZEND_FUNCTION(mysqli_multi_query);
ZEND_FUNCTION(mysqli_next_result);
ZEND_FUNCTION(mysqli_num_fields);
ZEND_FUNCTION(mysqli_num_rows);
ZEND_FUNCTION(mysqli_options);
ZEND_FUNCTION(mysqli_ping);
ZEND_FUNCTION(mysqli_poll);
ZEND_FUNCTION(mysqli_prepare);
ZEND_FUNCTION(mysqli_report);
ZEND_FUNCTION(mysqli_query);
ZEND_FUNCTION(mysqli_real_connect);
ZEND_FUNCTION(mysqli_real_escape_string);
ZEND_FUNCTION(mysqli_real_query);
ZEND_FUNCTION(mysqli_reap_async_query);
ZEND_FUNCTION(mysqli_release_savepoint);
ZEND_FUNCTION(mysqli_rollback);
ZEND_FUNCTION(mysqli_savepoint);
ZEND_FUNCTION(mysqli_select_db);
ZEND_FUNCTION(mysqli_set_charset);
ZEND_FUNCTION(mysqli_stmt_affected_rows);
ZEND_FUNCTION(mysqli_stmt_attr_get);
ZEND_FUNCTION(mysqli_stmt_attr_set);
ZEND_FUNCTION(mysqli_stmt_bind_param);
ZEND_FUNCTION(mysqli_stmt_bind_result);
ZEND_FUNCTION(mysqli_stmt_close);
ZEND_FUNCTION(mysqli_stmt_data_seek);
ZEND_FUNCTION(mysqli_stmt_errno);
ZEND_FUNCTION(mysqli_stmt_error);
ZEND_FUNCTION(mysqli_stmt_error_list);
ZEND_FUNCTION(mysqli_stmt_fetch);
ZEND_FUNCTION(mysqli_stmt_field_count);
ZEND_FUNCTION(mysqli_stmt_free_result);
ZEND_FUNCTION(mysqli_stmt_get_result);
ZEND_FUNCTION(mysqli_stmt_get_warnings);
ZEND_FUNCTION(mysqli_stmt_init);
ZEND_FUNCTION(mysqli_stmt_insert_id);
ZEND_FUNCTION(mysqli_stmt_more_results);
ZEND_FUNCTION(mysqli_stmt_next_result);
ZEND_FUNCTION(mysqli_stmt_num_rows);
ZEND_FUNCTION(mysqli_stmt_param_count);
ZEND_FUNCTION(mysqli_stmt_prepare);
ZEND_FUNCTION(mysqli_stmt_reset);
ZEND_FUNCTION(mysqli_stmt_result_metadata);
ZEND_FUNCTION(mysqli_stmt_send_long_data);
ZEND_FUNCTION(mysqli_stmt_store_result);
ZEND_FUNCTION(mysqli_stmt_sqlstate);
ZEND_FUNCTION(mysqli_sqlstate);
ZEND_FUNCTION(mysqli_ssl_set);
ZEND_FUNCTION(mysqli_stat);
ZEND_FUNCTION(mysqli_store_result);
ZEND_FUNCTION(mysqli_thread_id);
ZEND_FUNCTION(mysqli_thread_safe);
ZEND_FUNCTION(mysqli_use_result);
ZEND_FUNCTION(mysqli_warning_count);
ZEND_FUNCTION(mysqli_refresh);
ZEND_METHOD(mysqli, __construct);
ZEND_METHOD(mysqli, init);
ZEND_METHOD(mysqli_result, __construct);
ZEND_METHOD(mysqli_result, getIterator);
ZEND_METHOD(mysqli_stmt, __construct);
ZEND_METHOD(mysqli_warning, __construct);
ZEND_METHOD(mysqli_warning, next);
ZEND_METHOD(mysqli_sql_exception, getSqlState);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(mysqli_affected_rows, arginfo_mysqli_affected_rows)
	ZEND_FE(mysqli_autocommit, arginfo_mysqli_autocommit)
	ZEND_FE(mysqli_begin_transaction, arginfo_mysqli_begin_transaction)
	ZEND_FE(mysqli_change_user, arginfo_mysqli_change_user)
	ZEND_FE(mysqli_character_set_name, arginfo_mysqli_character_set_name)
	ZEND_FE(mysqli_close, arginfo_mysqli_close)
	ZEND_FE(mysqli_commit, arginfo_mysqli_commit)
	ZEND_FE(mysqli_connect, arginfo_mysqli_connect)
	ZEND_FE(mysqli_connect_errno, arginfo_mysqli_connect_errno)
	ZEND_FE(mysqli_connect_error, arginfo_mysqli_connect_error)
	ZEND_FE(mysqli_data_seek, arginfo_mysqli_data_seek)
	ZEND_FE(mysqli_dump_debug_info, arginfo_mysqli_dump_debug_info)
	ZEND_FE(mysqli_debug, arginfo_mysqli_debug)
	ZEND_FE(mysqli_errno, arginfo_mysqli_errno)
	ZEND_FE(mysqli_error, arginfo_mysqli_error)
	ZEND_FE(mysqli_error_list, arginfo_mysqli_error_list)
	ZEND_FE(mysqli_stmt_execute, arginfo_mysqli_stmt_execute)
	ZEND_RAW_FENTRY("mysqli_execute", zif_mysqli_stmt_execute, arginfo_mysqli_execute, 0, NULL, NULL)
	ZEND_FE(mysqli_execute_query, arginfo_mysqli_execute_query)
	ZEND_FE(mysqli_fetch_field, arginfo_mysqli_fetch_field)
	ZEND_FE(mysqli_fetch_fields, arginfo_mysqli_fetch_fields)
	ZEND_FE(mysqli_fetch_field_direct, arginfo_mysqli_fetch_field_direct)
	ZEND_FE(mysqli_fetch_lengths, arginfo_mysqli_fetch_lengths)
	ZEND_FE(mysqli_fetch_all, arginfo_mysqli_fetch_all)
	ZEND_FE(mysqli_fetch_array, arginfo_mysqli_fetch_array)
	ZEND_FE(mysqli_fetch_assoc, arginfo_mysqli_fetch_assoc)
	ZEND_FE(mysqli_fetch_object, arginfo_mysqli_fetch_object)
	ZEND_FE(mysqli_fetch_row, arginfo_mysqli_fetch_row)
	ZEND_FE(mysqli_fetch_column, arginfo_mysqli_fetch_column)
	ZEND_FE(mysqli_field_count, arginfo_mysqli_field_count)
	ZEND_FE(mysqli_field_seek, arginfo_mysqli_field_seek)
	ZEND_FE(mysqli_field_tell, arginfo_mysqli_field_tell)
	ZEND_FE(mysqli_free_result, arginfo_mysqli_free_result)
	ZEND_FE(mysqli_get_connection_stats, arginfo_mysqli_get_connection_stats)
	ZEND_FE(mysqli_get_client_stats, arginfo_mysqli_get_client_stats)
	ZEND_FE(mysqli_get_charset, arginfo_mysqli_get_charset)
	ZEND_FE(mysqli_get_client_info, arginfo_mysqli_get_client_info)
	ZEND_FE(mysqli_get_client_version, arginfo_mysqli_get_client_version)
	ZEND_FE(mysqli_get_links_stats, arginfo_mysqli_get_links_stats)
	ZEND_FE(mysqli_get_host_info, arginfo_mysqli_get_host_info)
	ZEND_FE(mysqli_get_proto_info, arginfo_mysqli_get_proto_info)
	ZEND_FE(mysqli_get_server_info, arginfo_mysqli_get_server_info)
	ZEND_FE(mysqli_get_server_version, arginfo_mysqli_get_server_version)
	ZEND_FE(mysqli_get_warnings, arginfo_mysqli_get_warnings)
	ZEND_FE(mysqli_init, arginfo_mysqli_init)
	ZEND_FE(mysqli_info, arginfo_mysqli_info)
	ZEND_FE(mysqli_insert_id, arginfo_mysqli_insert_id)
	ZEND_RAW_FENTRY("mysqli_kill", zif_mysqli_kill, arginfo_mysqli_kill, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_FE(mysqli_more_results, arginfo_mysqli_more_results)
	ZEND_FE(mysqli_multi_query, arginfo_mysqli_multi_query)
	ZEND_FE(mysqli_next_result, arginfo_mysqli_next_result)
	ZEND_FE(mysqli_num_fields, arginfo_mysqli_num_fields)
	ZEND_FE(mysqli_num_rows, arginfo_mysqli_num_rows)
	ZEND_FE(mysqli_options, arginfo_mysqli_options)
	ZEND_RAW_FENTRY("mysqli_set_opt", zif_mysqli_options, arginfo_mysqli_set_opt, 0, NULL, NULL)
	ZEND_RAW_FENTRY("mysqli_ping", zif_mysqli_ping, arginfo_mysqli_ping, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_FE(mysqli_poll, arginfo_mysqli_poll)
	ZEND_FE(mysqli_prepare, arginfo_mysqli_prepare)
	ZEND_FE(mysqli_report, arginfo_mysqli_report)
	ZEND_FE(mysqli_query, arginfo_mysqli_query)
	ZEND_FE(mysqli_real_connect, arginfo_mysqli_real_connect)
	ZEND_FE(mysqli_real_escape_string, arginfo_mysqli_real_escape_string)
	ZEND_RAW_FENTRY("mysqli_escape_string", zif_mysqli_real_escape_string, arginfo_mysqli_escape_string, 0, NULL, NULL)
	ZEND_FE(mysqli_real_query, arginfo_mysqli_real_query)
	ZEND_FE(mysqli_reap_async_query, arginfo_mysqli_reap_async_query)
	ZEND_FE(mysqli_release_savepoint, arginfo_mysqli_release_savepoint)
	ZEND_FE(mysqli_rollback, arginfo_mysqli_rollback)
	ZEND_FE(mysqli_savepoint, arginfo_mysqli_savepoint)
	ZEND_FE(mysqli_select_db, arginfo_mysqli_select_db)
	ZEND_FE(mysqli_set_charset, arginfo_mysqli_set_charset)
	ZEND_FE(mysqli_stmt_affected_rows, arginfo_mysqli_stmt_affected_rows)
	ZEND_FE(mysqli_stmt_attr_get, arginfo_mysqli_stmt_attr_get)
	ZEND_FE(mysqli_stmt_attr_set, arginfo_mysqli_stmt_attr_set)
	ZEND_FE(mysqli_stmt_bind_param, arginfo_mysqli_stmt_bind_param)
	ZEND_FE(mysqli_stmt_bind_result, arginfo_mysqli_stmt_bind_result)
	ZEND_FE(mysqli_stmt_close, arginfo_mysqli_stmt_close)
	ZEND_FE(mysqli_stmt_data_seek, arginfo_mysqli_stmt_data_seek)
	ZEND_FE(mysqli_stmt_errno, arginfo_mysqli_stmt_errno)
	ZEND_FE(mysqli_stmt_error, arginfo_mysqli_stmt_error)
	ZEND_FE(mysqli_stmt_error_list, arginfo_mysqli_stmt_error_list)
	ZEND_FE(mysqli_stmt_fetch, arginfo_mysqli_stmt_fetch)
	ZEND_FE(mysqli_stmt_field_count, arginfo_mysqli_stmt_field_count)
	ZEND_FE(mysqli_stmt_free_result, arginfo_mysqli_stmt_free_result)
	ZEND_FE(mysqli_stmt_get_result, arginfo_mysqli_stmt_get_result)
	ZEND_FE(mysqli_stmt_get_warnings, arginfo_mysqli_stmt_get_warnings)
	ZEND_FE(mysqli_stmt_init, arginfo_mysqli_stmt_init)
	ZEND_FE(mysqli_stmt_insert_id, arginfo_mysqli_stmt_insert_id)
	ZEND_FE(mysqli_stmt_more_results, arginfo_mysqli_stmt_more_results)
	ZEND_FE(mysqli_stmt_next_result, arginfo_mysqli_stmt_next_result)
	ZEND_FE(mysqli_stmt_num_rows, arginfo_mysqli_stmt_num_rows)
	ZEND_FE(mysqli_stmt_param_count, arginfo_mysqli_stmt_param_count)
	ZEND_FE(mysqli_stmt_prepare, arginfo_mysqli_stmt_prepare)
	ZEND_FE(mysqli_stmt_reset, arginfo_mysqli_stmt_reset)
	ZEND_FE(mysqli_stmt_result_metadata, arginfo_mysqli_stmt_result_metadata)
	ZEND_FE(mysqli_stmt_send_long_data, arginfo_mysqli_stmt_send_long_data)
	ZEND_FE(mysqli_stmt_store_result, arginfo_mysqli_stmt_store_result)
	ZEND_FE(mysqli_stmt_sqlstate, arginfo_mysqli_stmt_sqlstate)
	ZEND_FE(mysqli_sqlstate, arginfo_mysqli_sqlstate)
	ZEND_FE(mysqli_ssl_set, arginfo_mysqli_ssl_set)
	ZEND_FE(mysqli_stat, arginfo_mysqli_stat)
	ZEND_FE(mysqli_store_result, arginfo_mysqli_store_result)
	ZEND_FE(mysqli_thread_id, arginfo_mysqli_thread_id)
	ZEND_FE(mysqli_thread_safe, arginfo_mysqli_thread_safe)
	ZEND_FE(mysqli_use_result, arginfo_mysqli_use_result)
	ZEND_FE(mysqli_warning_count, arginfo_mysqli_warning_count)
	ZEND_RAW_FENTRY("mysqli_refresh", zif_mysqli_refresh, arginfo_mysqli_refresh, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_FE_END
};

static const zend_function_entry class_mysqli_methods[] = {
	ZEND_ME(mysqli, __construct, arginfo_class_mysqli___construct, ZEND_ACC_PUBLIC)
	ZEND_RAW_FENTRY("autocommit", zif_mysqli_autocommit, arginfo_class_mysqli_autocommit, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("begin_transaction", zif_mysqli_begin_transaction, arginfo_class_mysqli_begin_transaction, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("change_user", zif_mysqli_change_user, arginfo_class_mysqli_change_user, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("character_set_name", zif_mysqli_character_set_name, arginfo_class_mysqli_character_set_name, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("close", zif_mysqli_close, arginfo_class_mysqli_close, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("commit", zif_mysqli_commit, arginfo_class_mysqli_commit, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("connect", zif_mysqli_connect, arginfo_class_mysqli_connect, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("dump_debug_info", zif_mysqli_dump_debug_info, arginfo_class_mysqli_dump_debug_info, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("debug", zif_mysqli_debug, arginfo_class_mysqli_debug, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("get_charset", zif_mysqli_get_charset, arginfo_class_mysqli_get_charset, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("execute_query", zif_mysqli_execute_query, arginfo_class_mysqli_execute_query, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("get_client_info", zif_mysqli_get_client_info, arginfo_class_mysqli_get_client_info, ZEND_ACC_PUBLIC|ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("get_connection_stats", zif_mysqli_get_connection_stats, arginfo_class_mysqli_get_connection_stats, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("get_server_info", zif_mysqli_get_server_info, arginfo_class_mysqli_get_server_info, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("get_warnings", zif_mysqli_get_warnings, arginfo_class_mysqli_get_warnings, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_ME(mysqli, init, arginfo_class_mysqli_init, ZEND_ACC_PUBLIC|ZEND_ACC_DEPRECATED)
	ZEND_RAW_FENTRY("kill", zif_mysqli_kill, arginfo_class_mysqli_kill, ZEND_ACC_PUBLIC|ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("multi_query", zif_mysqli_multi_query, arginfo_class_mysqli_multi_query, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("more_results", zif_mysqli_more_results, arginfo_class_mysqli_more_results, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("next_result", zif_mysqli_next_result, arginfo_class_mysqli_next_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("ping", zif_mysqli_ping, arginfo_class_mysqli_ping, ZEND_ACC_PUBLIC|ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("poll", zif_mysqli_poll, arginfo_class_mysqli_poll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC, NULL, NULL)
	ZEND_RAW_FENTRY("prepare", zif_mysqli_prepare, arginfo_class_mysqli_prepare, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("query", zif_mysqli_query, arginfo_class_mysqli_query, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("real_connect", zif_mysqli_real_connect, arginfo_class_mysqli_real_connect, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("real_escape_string", zif_mysqli_real_escape_string, arginfo_class_mysqli_real_escape_string, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("reap_async_query", zif_mysqli_reap_async_query, arginfo_class_mysqli_reap_async_query, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("escape_string", zif_mysqli_real_escape_string, arginfo_class_mysqli_escape_string, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("real_query", zif_mysqli_real_query, arginfo_class_mysqli_real_query, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("release_savepoint", zif_mysqli_release_savepoint, arginfo_class_mysqli_release_savepoint, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("rollback", zif_mysqli_rollback, arginfo_class_mysqli_rollback, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("savepoint", zif_mysqli_savepoint, arginfo_class_mysqli_savepoint, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("select_db", zif_mysqli_select_db, arginfo_class_mysqli_select_db, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("set_charset", zif_mysqli_set_charset, arginfo_class_mysqli_set_charset, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("options", zif_mysqli_options, arginfo_class_mysqli_options, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("set_opt", zif_mysqli_options, arginfo_class_mysqli_set_opt, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("ssl_set", zif_mysqli_ssl_set, arginfo_class_mysqli_ssl_set, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("stat", zif_mysqli_stat, arginfo_class_mysqli_stat, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("stmt_init", zif_mysqli_stmt_init, arginfo_class_mysqli_stmt_init, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("store_result", zif_mysqli_store_result, arginfo_class_mysqli_store_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("thread_safe", zif_mysqli_thread_safe, arginfo_class_mysqli_thread_safe, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("use_result", zif_mysqli_use_result, arginfo_class_mysqli_use_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("refresh", zif_mysqli_refresh, arginfo_class_mysqli_refresh, ZEND_ACC_PUBLIC|ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_FE_END
};

static const zend_function_entry class_mysqli_result_methods[] = {
	ZEND_ME(mysqli_result, __construct, arginfo_class_mysqli_result___construct, ZEND_ACC_PUBLIC)
	ZEND_RAW_FENTRY("close", zif_mysqli_free_result, arginfo_class_mysqli_result_close, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("free", zif_mysqli_free_result, arginfo_class_mysqli_result_free, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("data_seek", zif_mysqli_data_seek, arginfo_class_mysqli_result_data_seek, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_field", zif_mysqli_fetch_field, arginfo_class_mysqli_result_fetch_field, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_fields", zif_mysqli_fetch_fields, arginfo_class_mysqli_result_fetch_fields, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_field_direct", zif_mysqli_fetch_field_direct, arginfo_class_mysqli_result_fetch_field_direct, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_all", zif_mysqli_fetch_all, arginfo_class_mysqli_result_fetch_all, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_array", zif_mysqli_fetch_array, arginfo_class_mysqli_result_fetch_array, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_assoc", zif_mysqli_fetch_assoc, arginfo_class_mysqli_result_fetch_assoc, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_object", zif_mysqli_fetch_object, arginfo_class_mysqli_result_fetch_object, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_row", zif_mysqli_fetch_row, arginfo_class_mysqli_result_fetch_row, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch_column", zif_mysqli_fetch_column, arginfo_class_mysqli_result_fetch_column, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("field_seek", zif_mysqli_field_seek, arginfo_class_mysqli_result_field_seek, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("free_result", zif_mysqli_free_result, arginfo_class_mysqli_result_free_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_ME(mysqli_result, getIterator, arginfo_class_mysqli_result_getIterator, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_mysqli_stmt_methods[] = {
	ZEND_ME(mysqli_stmt, __construct, arginfo_class_mysqli_stmt___construct, ZEND_ACC_PUBLIC)
	ZEND_RAW_FENTRY("attr_get", zif_mysqli_stmt_attr_get, arginfo_class_mysqli_stmt_attr_get, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("attr_set", zif_mysqli_stmt_attr_set, arginfo_class_mysqli_stmt_attr_set, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("bind_param", zif_mysqli_stmt_bind_param, arginfo_class_mysqli_stmt_bind_param, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("bind_result", zif_mysqli_stmt_bind_result, arginfo_class_mysqli_stmt_bind_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("close", zif_mysqli_stmt_close, arginfo_class_mysqli_stmt_close, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("data_seek", zif_mysqli_stmt_data_seek, arginfo_class_mysqli_stmt_data_seek, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("execute", zif_mysqli_stmt_execute, arginfo_class_mysqli_stmt_execute, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("fetch", zif_mysqli_stmt_fetch, arginfo_class_mysqli_stmt_fetch, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("get_warnings", zif_mysqli_stmt_get_warnings, arginfo_class_mysqli_stmt_get_warnings, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("result_metadata", zif_mysqli_stmt_result_metadata, arginfo_class_mysqli_stmt_result_metadata, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("more_results", zif_mysqli_stmt_more_results, arginfo_class_mysqli_stmt_more_results, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("next_result", zif_mysqli_stmt_next_result, arginfo_class_mysqli_stmt_next_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("num_rows", zif_mysqli_stmt_num_rows, arginfo_class_mysqli_stmt_num_rows, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("send_long_data", zif_mysqli_stmt_send_long_data, arginfo_class_mysqli_stmt_send_long_data, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("free_result", zif_mysqli_stmt_free_result, arginfo_class_mysqli_stmt_free_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("reset", zif_mysqli_stmt_reset, arginfo_class_mysqli_stmt_reset, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("prepare", zif_mysqli_stmt_prepare, arginfo_class_mysqli_stmt_prepare, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("store_result", zif_mysqli_stmt_store_result, arginfo_class_mysqli_stmt_store_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_RAW_FENTRY("get_result", zif_mysqli_stmt_get_result, arginfo_class_mysqli_stmt_get_result, ZEND_ACC_PUBLIC, NULL, NULL)
	ZEND_FE_END
};

static const zend_function_entry class_mysqli_warning_methods[] = {
	ZEND_ME(mysqli_warning, __construct, arginfo_class_mysqli_warning___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(mysqli_warning, next, arginfo_class_mysqli_warning_next, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_mysqli_sql_exception_methods[] = {
	ZEND_ME(mysqli_sql_exception, getSqlState, arginfo_class_mysqli_sql_exception_getSqlState, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_mysqli_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("MYSQLI_READ_DEFAULT_GROUP", MYSQL_READ_DEFAULT_GROUP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_READ_DEFAULT_FILE", MYSQL_READ_DEFAULT_FILE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_CONNECT_TIMEOUT", MYSQL_OPT_CONNECT_TIMEOUT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_LOCAL_INFILE", MYSQL_OPT_LOCAL_INFILE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_LOAD_DATA_LOCAL_DIR", MYSQL_OPT_LOAD_DATA_LOCAL_DIR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_INIT_COMMAND", MYSQL_INIT_COMMAND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_READ_TIMEOUT", MYSQL_OPT_READ_TIMEOUT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_NET_CMD_BUFFER_SIZE", MYSQLND_OPT_NET_CMD_BUFFER_SIZE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_NET_READ_BUFFER_SIZE", MYSQLND_OPT_NET_READ_BUFFER_SIZE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_INT_AND_FLOAT_NATIVE", MYSQLND_OPT_INT_AND_FLOAT_NATIVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_SSL_VERIFY_SERVER_CERT", MYSQL_OPT_SSL_VERIFY_SERVER_CERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_SERVER_PUBLIC_KEY", MYSQL_SERVER_PUBLIC_KEY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_SSL", CLIENT_SSL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_COMPRESS", CLIENT_COMPRESS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_INTERACTIVE", CLIENT_INTERACTIVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_IGNORE_SPACE", CLIENT_IGNORE_SPACE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_NO_SCHEMA", CLIENT_NO_SCHEMA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_FOUND_ROWS", CLIENT_FOUND_ROWS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_SSL_VERIFY_SERVER_CERT", CLIENT_SSL_VERIFY_SERVER_CERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_SSL_DONT_VERIFY_SERVER_CERT", CLIENT_SSL_DONT_VERIFY_SERVER_CERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CLIENT_CAN_HANDLE_EXPIRED_PASSWORDS", CLIENT_CAN_HANDLE_EXPIRED_PASSWORDS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_OPT_CAN_HANDLE_EXPIRED_PASSWORDS", MYSQL_OPT_CAN_HANDLE_EXPIRED_PASSWORDS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_STORE_RESULT", MYSQLI_STORE_RESULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_USE_RESULT", MYSQLI_USE_RESULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_ASYNC", MYSQLI_ASYNC, CONST_PERSISTENT);
	zend_constant *const_MYSQLI_STORE_RESULT_COPY_DATA = REGISTER_LONG_CONSTANT("MYSQLI_STORE_RESULT_COPY_DATA", MYSQLI_STORE_RESULT_COPY_DATA, CONST_PERSISTENT | CONST_DEPRECATED);
	REGISTER_LONG_CONSTANT("MYSQLI_ASSOC", MYSQLI_ASSOC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_NUM", MYSQLI_NUM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_BOTH", MYSQLI_BOTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_STMT_ATTR_UPDATE_MAX_LENGTH", STMT_ATTR_UPDATE_MAX_LENGTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_STMT_ATTR_CURSOR_TYPE", STMT_ATTR_CURSOR_TYPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CURSOR_TYPE_NO_CURSOR", CURSOR_TYPE_NO_CURSOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_CURSOR_TYPE_READ_ONLY", CURSOR_TYPE_READ_ONLY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_NOT_NULL_FLAG", NOT_NULL_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_PRI_KEY_FLAG", PRI_KEY_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_UNIQUE_KEY_FLAG", UNIQUE_KEY_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_MULTIPLE_KEY_FLAG", MULTIPLE_KEY_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_BLOB_FLAG", BLOB_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_UNSIGNED_FLAG", UNSIGNED_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_ZEROFILL_FLAG", ZEROFILL_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_AUTO_INCREMENT_FLAG", AUTO_INCREMENT_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TIMESTAMP_FLAG", TIMESTAMP_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_SET_FLAG", SET_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_NUM_FLAG", NUM_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_PART_KEY_FLAG", PART_KEY_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_GROUP_FLAG", GROUP_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_ENUM_FLAG", ENUM_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_BINARY_FLAG", BINARY_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_NO_DEFAULT_VALUE_FLAG", NO_DEFAULT_VALUE_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_ON_UPDATE_NOW_FLAG", ON_UPDATE_NOW_FLAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_DECIMAL", FIELD_TYPE_DECIMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_TINY", FIELD_TYPE_TINY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_SHORT", FIELD_TYPE_SHORT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_LONG", FIELD_TYPE_LONG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_FLOAT", FIELD_TYPE_FLOAT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_DOUBLE", FIELD_TYPE_DOUBLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_NULL", FIELD_TYPE_NULL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_TIMESTAMP", FIELD_TYPE_TIMESTAMP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_LONGLONG", FIELD_TYPE_LONGLONG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_INT24", FIELD_TYPE_INT24, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_DATE", FIELD_TYPE_DATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_TIME", FIELD_TYPE_TIME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_DATETIME", FIELD_TYPE_DATETIME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_YEAR", FIELD_TYPE_YEAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_NEWDATE", FIELD_TYPE_NEWDATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_ENUM", FIELD_TYPE_ENUM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_SET", FIELD_TYPE_SET, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_TINY_BLOB", FIELD_TYPE_TINY_BLOB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_MEDIUM_BLOB", FIELD_TYPE_MEDIUM_BLOB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_LONG_BLOB", FIELD_TYPE_LONG_BLOB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_BLOB", FIELD_TYPE_BLOB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_VAR_STRING", FIELD_TYPE_VAR_STRING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_STRING", FIELD_TYPE_STRING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_CHAR", FIELD_TYPE_CHAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_GEOMETRY", FIELD_TYPE_GEOMETRY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_VECTOR", FIELD_TYPE_VECTOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_JSON", FIELD_TYPE_JSON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_NEWDECIMAL", FIELD_TYPE_NEWDECIMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TYPE_BIT", FIELD_TYPE_BIT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_SET_CHARSET_NAME", MYSQL_SET_CHARSET_NAME, CONST_PERSISTENT);
	zend_constant *const_MYSQLI_NO_DATA = REGISTER_LONG_CONSTANT("MYSQLI_NO_DATA", MYSQL_NO_DATA, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_DATA_TRUNCATED = REGISTER_LONG_CONSTANT("MYSQLI_DATA_TRUNCATED", MYSQL_DATA_TRUNCATED, CONST_PERSISTENT | CONST_DEPRECATED);
	REGISTER_LONG_CONSTANT("MYSQLI_REPORT_INDEX", MYSQLI_REPORT_INDEX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_REPORT_ERROR", MYSQLI_REPORT_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_REPORT_STRICT", MYSQLI_REPORT_STRICT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_REPORT_ALL", MYSQLI_REPORT_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_REPORT_OFF", MYSQLI_REPORT_OFF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_DEBUG_TRACE_ENABLED", MYSQLND_DBG_ENABLED, CONST_PERSISTENT);
	zend_constant *const_MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED = REGISTER_LONG_CONSTANT("MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED", SERVER_QUERY_NO_GOOD_INDEX_USED, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_SERVER_QUERY_NO_INDEX_USED = REGISTER_LONG_CONSTANT("MYSQLI_SERVER_QUERY_NO_INDEX_USED", SERVER_QUERY_NO_INDEX_USED, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_SERVER_QUERY_WAS_SLOW = REGISTER_LONG_CONSTANT("MYSQLI_SERVER_QUERY_WAS_SLOW", SERVER_QUERY_WAS_SLOW, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_SERVER_PS_OUT_PARAMS = REGISTER_LONG_CONSTANT("MYSQLI_SERVER_PS_OUT_PARAMS", SERVER_PS_OUT_PARAMS, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_GRANT = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_GRANT", REFRESH_GRANT, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_LOG = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_LOG", REFRESH_LOG, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_TABLES = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_TABLES", REFRESH_TABLES, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_HOSTS = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_HOSTS", REFRESH_HOSTS, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_STATUS = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_STATUS", REFRESH_STATUS, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_THREADS = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_THREADS", REFRESH_THREADS, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_REPLICA = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_REPLICA", REFRESH_SLAVE, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_SLAVE = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_SLAVE", REFRESH_SLAVE, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_MASTER = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_MASTER", REFRESH_MASTER, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_MYSQLI_REFRESH_BACKUP_LOG = REGISTER_LONG_CONSTANT("MYSQLI_REFRESH_BACKUP_LOG", REFRESH_BACKUP_LOG, CONST_PERSISTENT | CONST_DEPRECATED);
	REGISTER_LONG_CONSTANT("MYSQLI_TRANS_START_WITH_CONSISTENT_SNAPSHOT", TRANS_START_WITH_CONSISTENT_SNAPSHOT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TRANS_START_READ_WRITE", TRANS_START_READ_WRITE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TRANS_START_READ_ONLY", TRANS_START_READ_ONLY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TRANS_COR_AND_CHAIN", TRANS_COR_AND_CHAIN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TRANS_COR_AND_NO_CHAIN", TRANS_COR_AND_NO_CHAIN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TRANS_COR_RELEASE", TRANS_COR_RELEASE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MYSQLI_TRANS_COR_NO_RELEASE", TRANS_COR_NO_RELEASE, CONST_PERSISTENT);
	zend_constant *const_MYSQLI_IS_MARIADB = REGISTER_BOOL_CONSTANT("MYSQLI_IS_MARIADB", false, CONST_PERSISTENT | CONST_DEPRECATED);


	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "mysqli_change_user", sizeof("mysqli_change_user") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "mysqli_connect", sizeof("mysqli_connect") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_attribute *attribute_Deprecated_func_mysqli_kill_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mysqli_kill", sizeof("mysqli_kill") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_mysqli_kill_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_func_mysqli_kill_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_mysqli_kill_0_arg1_str = zend_string_init("use KILL CONNECTION/QUERY SQL statement instead", strlen("use KILL CONNECTION/QUERY SQL statement instead"), 1);
	ZVAL_STR(&attribute_Deprecated_func_mysqli_kill_0->args[1].value, attribute_Deprecated_func_mysqli_kill_0_arg1_str);
	attribute_Deprecated_func_mysqli_kill_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_func_mysqli_ping_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mysqli_ping", sizeof("mysqli_ping") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_mysqli_ping_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_func_mysqli_ping_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_mysqli_ping_0_arg1_str = zend_string_init("because the reconnect feature has been removed in PHP 8.2 and this function is now redundant", strlen("because the reconnect feature has been removed in PHP 8.2 and this function is now redundant"), 1);
	ZVAL_STR(&attribute_Deprecated_func_mysqli_ping_0->args[1].value, attribute_Deprecated_func_mysqli_ping_0_arg1_str);
	attribute_Deprecated_func_mysqli_ping_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "mysqli_real_connect", sizeof("mysqli_real_connect") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_attribute *attribute_Deprecated_func_mysqli_refresh_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mysqli_refresh", sizeof("mysqli_refresh") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_mysqli_refresh_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_func_mysqli_refresh_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_mysqli_refresh_0_arg1_str = zend_string_init("use FLUSH SQL statement instead", strlen("use FLUSH SQL statement instead"), 1);
	ZVAL_STR(&attribute_Deprecated_func_mysqli_refresh_0->args[1].value, attribute_Deprecated_func_mysqli_refresh_0_arg1_str);
	attribute_Deprecated_func_mysqli_refresh_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_STORE_RESULT_COPY_DATA_0 = zend_add_global_constant_attribute(const_MYSQLI_STORE_RESULT_COPY_DATA, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_STORE_RESULT_COPY_DATA_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_STORE_RESULT_COPY_DATA_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_const_MYSQLI_STORE_RESULT_COPY_DATA_0_arg1_str = zend_string_init("as the mysqli_store_result() parameter is unused since 8.1", strlen("as the mysqli_store_result() parameter is unused since 8.1"), 1);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_STORE_RESULT_COPY_DATA_0->args[1].value, attribute_Deprecated_const_MYSQLI_STORE_RESULT_COPY_DATA_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_STORE_RESULT_COPY_DATA_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_NO_DATA_0 = zend_add_global_constant_attribute(const_MYSQLI_NO_DATA, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_NO_DATA_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_const_MYSQLI_NO_DATA_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_const_MYSQLI_NO_DATA_0_arg1_str = zend_string_init("as it was unused", strlen("as it was unused"), 1);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_NO_DATA_0->args[1].value, attribute_Deprecated_const_MYSQLI_NO_DATA_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_NO_DATA_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_DATA_TRUNCATED_0 = zend_add_global_constant_attribute(const_MYSQLI_DATA_TRUNCATED, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_DATA_TRUNCATED_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_const_MYSQLI_DATA_TRUNCATED_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_DATA_TRUNCATED_0->args[1].value, attribute_Deprecated_const_MYSQLI_NO_DATA_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_DATA_TRUNCATED_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED_0 = zend_add_global_constant_attribute(const_MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED_0->args[1].value, attribute_Deprecated_const_MYSQLI_NO_DATA_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_GOOD_INDEX_USED_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_INDEX_USED_0 = zend_add_global_constant_attribute(const_MYSQLI_SERVER_QUERY_NO_INDEX_USED, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_INDEX_USED_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_INDEX_USED_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_INDEX_USED_0->args[1].value, attribute_Deprecated_const_MYSQLI_NO_DATA_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_SERVER_QUERY_NO_INDEX_USED_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_SERVER_QUERY_WAS_SLOW_0 = zend_add_global_constant_attribute(const_MYSQLI_SERVER_QUERY_WAS_SLOW, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_SERVER_QUERY_WAS_SLOW_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_const_MYSQLI_SERVER_QUERY_WAS_SLOW_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_SERVER_QUERY_WAS_SLOW_0->args[1].value, attribute_Deprecated_const_MYSQLI_NO_DATA_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_SERVER_QUERY_WAS_SLOW_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_SERVER_PS_OUT_PARAMS_0 = zend_add_global_constant_attribute(const_MYSQLI_SERVER_PS_OUT_PARAMS, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_SERVER_PS_OUT_PARAMS_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_const_MYSQLI_SERVER_PS_OUT_PARAMS_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_SERVER_PS_OUT_PARAMS_0->args[1].value, attribute_Deprecated_const_MYSQLI_NO_DATA_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_SERVER_PS_OUT_PARAMS_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_GRANT, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str = zend_string_init("as mysqli_refresh() is deprecated", strlen("as mysqli_refresh() is deprecated"), 1);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_LOG_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_LOG, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_LOG_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_LOG_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_LOG_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_LOG_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_TABLES_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_TABLES, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_TABLES_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_TABLES_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_TABLES_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_TABLES_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_HOSTS_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_HOSTS, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_HOSTS_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_HOSTS_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_HOSTS_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_HOSTS_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_STATUS_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_STATUS, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_STATUS_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_STATUS_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_STATUS_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_STATUS_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_THREADS_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_THREADS, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_THREADS_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_THREADS_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_THREADS_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_THREADS_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_REPLICA_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_REPLICA, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_REPLICA_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_REPLICA_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_REPLICA_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_REPLICA_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_SLAVE_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_SLAVE, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_SLAVE_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_SLAVE_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_SLAVE_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_SLAVE_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_MASTER_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_MASTER, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_MASTER_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_MASTER_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_MASTER_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_MASTER_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_REFRESH_BACKUP_LOG_0 = zend_add_global_constant_attribute(const_MYSQLI_REFRESH_BACKUP_LOG, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_REFRESH_BACKUP_LOG_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_const_MYSQLI_REFRESH_BACKUP_LOG_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_MYSQLI_REFRESH_BACKUP_LOG_0->args[1].value, attribute_Deprecated_const_MYSQLI_REFRESH_GRANT_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_REFRESH_BACKUP_LOG_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_MYSQLI_IS_MARIADB_0 = zend_add_global_constant_attribute(const_MYSQLI_IS_MARIADB, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_IS_MARIADB_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_2));
	attribute_Deprecated_const_MYSQLI_IS_MARIADB_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_const_MYSQLI_IS_MARIADB_0_arg1_str = zend_string_init("as it is always false", strlen("as it is always false"), 1);
	ZVAL_STR(&attribute_Deprecated_const_MYSQLI_IS_MARIADB_0->args[1].value, attribute_Deprecated_const_MYSQLI_IS_MARIADB_0_arg1_str);
	attribute_Deprecated_const_MYSQLI_IS_MARIADB_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);
}

static zend_class_entry *register_class_mysqli_driver(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "mysqli_driver", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_client_info_default_value;
	ZVAL_UNDEF(&property_client_info_default_value);
	zend_string *property_client_info_name = zend_string_init("client_info", sizeof("client_info") - 1, 1);
	zend_declare_typed_property(class_entry, property_client_info_name, &property_client_info_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_client_info_name);

	zval property_client_version_default_value;
	ZVAL_UNDEF(&property_client_version_default_value);
	zend_string *property_client_version_name = zend_string_init("client_version", sizeof("client_version") - 1, 1);
	zend_declare_typed_property(class_entry, property_client_version_name, &property_client_version_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_client_version_name);

	zval property_driver_version_default_value;
	ZVAL_UNDEF(&property_driver_version_default_value);
	zend_string *property_driver_version_name = zend_string_init("driver_version", sizeof("driver_version") - 1, 1);
	zend_declare_typed_property(class_entry, property_driver_version_name, &property_driver_version_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_driver_version_name);

	zval property_report_mode_default_value;
	ZVAL_LONG(&property_report_mode_default_value, 0);
	zend_string *property_report_mode_name = zend_string_init("report_mode", sizeof("report_mode") - 1, 1);
	zend_declare_typed_property(class_entry, property_report_mode_name, &property_report_mode_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_report_mode_name);

	return class_entry;
}

static zend_class_entry *register_class_mysqli(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "mysqli", class_mysqli_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);

	zval property_affected_rows_default_value;
	ZVAL_UNDEF(&property_affected_rows_default_value);
	zend_string *property_affected_rows_name = zend_string_init("affected_rows", sizeof("affected_rows") - 1, 1);
	zend_declare_typed_property(class_entry, property_affected_rows_name, &property_affected_rows_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG|MAY_BE_STRING));
	zend_string_release(property_affected_rows_name);

	zval property_client_info_default_value;
	ZVAL_UNDEF(&property_client_info_default_value);
	zend_string *property_client_info_name = zend_string_init("client_info", sizeof("client_info") - 1, 1);
	zend_declare_typed_property(class_entry, property_client_info_name, &property_client_info_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_client_info_name);

	zval property_client_version_default_value;
	ZVAL_UNDEF(&property_client_version_default_value);
	zend_string *property_client_version_name = zend_string_init("client_version", sizeof("client_version") - 1, 1);
	zend_declare_typed_property(class_entry, property_client_version_name, &property_client_version_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_client_version_name);

	zval property_connect_errno_default_value;
	ZVAL_UNDEF(&property_connect_errno_default_value);
	zend_string *property_connect_errno_name = zend_string_init("connect_errno", sizeof("connect_errno") - 1, 1);
	zend_declare_typed_property(class_entry, property_connect_errno_name, &property_connect_errno_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_connect_errno_name);

	zval property_connect_error_default_value;
	ZVAL_UNDEF(&property_connect_error_default_value);
	zend_string *property_connect_error_name = zend_string_init("connect_error", sizeof("connect_error") - 1, 1);
	zend_declare_typed_property(class_entry, property_connect_error_name, &property_connect_error_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_connect_error_name);

	zval property_errno_default_value;
	ZVAL_UNDEF(&property_errno_default_value);
	zend_string *property_errno_name = zend_string_init("errno", sizeof("errno") - 1, 1);
	zend_declare_typed_property(class_entry, property_errno_name, &property_errno_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_errno_name);

	zval property_error_default_value;
	ZVAL_UNDEF(&property_error_default_value);
	zend_string *property_error_name = zend_string_init("error", sizeof("error") - 1, 1);
	zend_declare_typed_property(class_entry, property_error_name, &property_error_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_error_name);

	zval property_error_list_default_value;
	ZVAL_UNDEF(&property_error_list_default_value);
	zend_string *property_error_list_name = zend_string_init("error_list", sizeof("error_list") - 1, 1);
	zend_declare_typed_property(class_entry, property_error_list_name, &property_error_list_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_error_list_name);

	zval property_field_count_default_value;
	ZVAL_UNDEF(&property_field_count_default_value);
	zend_string *property_field_count_name = zend_string_init("field_count", sizeof("field_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_field_count_name, &property_field_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_field_count_name);

	zval property_host_info_default_value;
	ZVAL_UNDEF(&property_host_info_default_value);
	zend_string *property_host_info_name = zend_string_init("host_info", sizeof("host_info") - 1, 1);
	zend_declare_typed_property(class_entry, property_host_info_name, &property_host_info_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_host_info_name);

	zval property_info_default_value;
	ZVAL_UNDEF(&property_info_default_value);
	zend_string *property_info_name = zend_string_init("info", sizeof("info") - 1, 1);
	zend_declare_typed_property(class_entry, property_info_name, &property_info_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_info_name);

	zval property_insert_id_default_value;
	ZVAL_UNDEF(&property_insert_id_default_value);
	zend_string *property_insert_id_name = zend_string_init("insert_id", sizeof("insert_id") - 1, 1);
	zend_declare_typed_property(class_entry, property_insert_id_name, &property_insert_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG|MAY_BE_STRING));
	zend_string_release(property_insert_id_name);

	zval property_server_info_default_value;
	ZVAL_UNDEF(&property_server_info_default_value);
	zend_string *property_server_info_name = zend_string_init("server_info", sizeof("server_info") - 1, 1);
	zend_declare_typed_property(class_entry, property_server_info_name, &property_server_info_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_server_info_name);

	zval property_server_version_default_value;
	ZVAL_UNDEF(&property_server_version_default_value);
	zend_string *property_server_version_name = zend_string_init("server_version", sizeof("server_version") - 1, 1);
	zend_declare_typed_property(class_entry, property_server_version_name, &property_server_version_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_server_version_name);

	zval property_sqlstate_default_value;
	ZVAL_UNDEF(&property_sqlstate_default_value);
	zend_string *property_sqlstate_name = zend_string_init("sqlstate", sizeof("sqlstate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sqlstate_name, &property_sqlstate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_sqlstate_name);

	zval property_protocol_version_default_value;
	ZVAL_UNDEF(&property_protocol_version_default_value);
	zend_string *property_protocol_version_name = zend_string_init("protocol_version", sizeof("protocol_version") - 1, 1);
	zend_declare_typed_property(class_entry, property_protocol_version_name, &property_protocol_version_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_protocol_version_name);

	zval property_thread_id_default_value;
	ZVAL_UNDEF(&property_thread_id_default_value);
	zend_string *property_thread_id_name = zend_string_init("thread_id", sizeof("thread_id") - 1, 1);
	zend_declare_typed_property(class_entry, property_thread_id_name, &property_thread_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_thread_id_name);

	zval property_warning_count_default_value;
	ZVAL_UNDEF(&property_warning_count_default_value);
	zend_string *property_warning_count_name = zend_string_init("warning_count", sizeof("warning_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_warning_count_name, &property_warning_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_warning_count_name);


	zend_add_parameter_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "__construct", sizeof("__construct") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "change_user", sizeof("change_user") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "connect", sizeof("connect") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_attribute *attribute_Deprecated_func_get_client_info_0 = zend_add_function_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "get_client_info", sizeof("get_client_info") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_get_client_info_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_func_get_client_info_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_get_client_info_0_arg1_str = zend_string_init("use mysqli_get_client_info() instead", strlen("use mysqli_get_client_info() instead"), 1);
	ZVAL_STR(&attribute_Deprecated_func_get_client_info_0->args[1].value, attribute_Deprecated_func_get_client_info_0_arg1_str);
	attribute_Deprecated_func_get_client_info_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_func_init_0 = zend_add_function_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "init", sizeof("init") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_init_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_func_init_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_init_0_arg1_str = zend_string_init("replace calls to parent::init() with parent::__construct()", strlen("replace calls to parent::init() with parent::__construct()"), 1);
	ZVAL_STR(&attribute_Deprecated_func_init_0->args[1].value, attribute_Deprecated_func_init_0_arg1_str);
	attribute_Deprecated_func_init_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_func_kill_0 = zend_add_function_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "kill", sizeof("kill") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_kill_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_func_kill_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_kill_0_arg1_str = zend_string_init("use KILL CONNECTION/QUERY SQL statement instead", strlen("use KILL CONNECTION/QUERY SQL statement instead"), 1);
	ZVAL_STR(&attribute_Deprecated_func_kill_0->args[1].value, attribute_Deprecated_func_kill_0_arg1_str);
	attribute_Deprecated_func_kill_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_func_ping_0 = zend_add_function_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "ping", sizeof("ping") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_ping_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_func_ping_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_ping_0_arg1_str = zend_string_init("because the reconnect feature has been removed in PHP 8.2 and this method is now redundant", strlen("because the reconnect feature has been removed in PHP 8.2 and this method is now redundant"), 1);
	ZVAL_STR(&attribute_Deprecated_func_ping_0->args[1].value, attribute_Deprecated_func_ping_0_arg1_str);
	attribute_Deprecated_func_ping_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "real_connect", sizeof("real_connect") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_attribute *attribute_Deprecated_func_refresh_0 = zend_add_function_attribute(zend_hash_str_find_ptr(&class_entry->function_table, "refresh", sizeof("refresh") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_refresh_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_func_refresh_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_refresh_0_arg1_str = zend_string_init("use FLUSH SQL statement instead", strlen("use FLUSH SQL statement instead"), 1);
	ZVAL_STR(&attribute_Deprecated_func_refresh_0->args[1].value, attribute_Deprecated_func_refresh_0_arg1_str);
	attribute_Deprecated_func_refresh_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	return class_entry;
}

static zend_class_entry *register_class_mysqli_result(zend_class_entry *class_entry_IteratorAggregate)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "mysqli_result", class_mysqli_result_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);
	zend_class_implements(class_entry, 1, class_entry_IteratorAggregate);

	zval property_current_field_default_value;
	ZVAL_UNDEF(&property_current_field_default_value);
	zend_string *property_current_field_name = zend_string_init("current_field", sizeof("current_field") - 1, 1);
	zend_declare_typed_property(class_entry, property_current_field_name, &property_current_field_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_current_field_name);

	zval property_field_count_default_value;
	ZVAL_UNDEF(&property_field_count_default_value);
	zend_string *property_field_count_name = zend_string_init("field_count", sizeof("field_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_field_count_name, &property_field_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_field_count_name);

	zval property_lengths_default_value;
	ZVAL_UNDEF(&property_lengths_default_value);
	zend_string *property_lengths_name = zend_string_init("lengths", sizeof("lengths") - 1, 1);
	zend_declare_typed_property(class_entry, property_lengths_name, &property_lengths_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_lengths_name);

	zval property_num_rows_default_value;
	ZVAL_UNDEF(&property_num_rows_default_value);
	zend_string *property_num_rows_name = zend_string_init("num_rows", sizeof("num_rows") - 1, 1);
	zend_declare_typed_property(class_entry, property_num_rows_name, &property_num_rows_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG|MAY_BE_STRING));
	zend_string_release(property_num_rows_name);

	zval property_type_default_value;
	ZVAL_UNDEF(&property_type_default_value);
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_TYPE), &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));

	return class_entry;
}

static zend_class_entry *register_class_mysqli_stmt(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "mysqli_stmt", class_mysqli_stmt_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);

	zval property_affected_rows_default_value;
	ZVAL_UNDEF(&property_affected_rows_default_value);
	zend_string *property_affected_rows_name = zend_string_init("affected_rows", sizeof("affected_rows") - 1, 1);
	zend_declare_typed_property(class_entry, property_affected_rows_name, &property_affected_rows_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG|MAY_BE_STRING));
	zend_string_release(property_affected_rows_name);

	zval property_insert_id_default_value;
	ZVAL_UNDEF(&property_insert_id_default_value);
	zend_string *property_insert_id_name = zend_string_init("insert_id", sizeof("insert_id") - 1, 1);
	zend_declare_typed_property(class_entry, property_insert_id_name, &property_insert_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG|MAY_BE_STRING));
	zend_string_release(property_insert_id_name);

	zval property_num_rows_default_value;
	ZVAL_UNDEF(&property_num_rows_default_value);
	zend_string *property_num_rows_name = zend_string_init("num_rows", sizeof("num_rows") - 1, 1);
	zend_declare_typed_property(class_entry, property_num_rows_name, &property_num_rows_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG|MAY_BE_STRING));
	zend_string_release(property_num_rows_name);

	zval property_param_count_default_value;
	ZVAL_UNDEF(&property_param_count_default_value);
	zend_string *property_param_count_name = zend_string_init("param_count", sizeof("param_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_param_count_name, &property_param_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_param_count_name);

	zval property_field_count_default_value;
	ZVAL_UNDEF(&property_field_count_default_value);
	zend_string *property_field_count_name = zend_string_init("field_count", sizeof("field_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_field_count_name, &property_field_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_field_count_name);

	zval property_errno_default_value;
	ZVAL_UNDEF(&property_errno_default_value);
	zend_string *property_errno_name = zend_string_init("errno", sizeof("errno") - 1, 1);
	zend_declare_typed_property(class_entry, property_errno_name, &property_errno_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_errno_name);

	zval property_error_default_value;
	ZVAL_UNDEF(&property_error_default_value);
	zend_string *property_error_name = zend_string_init("error", sizeof("error") - 1, 1);
	zend_declare_typed_property(class_entry, property_error_name, &property_error_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_error_name);

	zval property_error_list_default_value;
	ZVAL_UNDEF(&property_error_list_default_value);
	zend_string *property_error_list_name = zend_string_init("error_list", sizeof("error_list") - 1, 1);
	zend_declare_typed_property(class_entry, property_error_list_name, &property_error_list_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_error_list_name);

	zval property_sqlstate_default_value;
	ZVAL_UNDEF(&property_sqlstate_default_value);
	zend_string *property_sqlstate_name = zend_string_init("sqlstate", sizeof("sqlstate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sqlstate_name, &property_sqlstate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_sqlstate_name);

	zval property_id_default_value;
	ZVAL_UNDEF(&property_id_default_value);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, 1);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_id_name);

	return class_entry;
}

static zend_class_entry *register_class_mysqli_warning(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "mysqli_warning", class_mysqli_warning_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_message_default_value;
	ZVAL_UNDEF(&property_message_default_value);
	zend_declare_typed_property(class_entry, ZSTR_KNOWN(ZEND_STR_MESSAGE), &property_message_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));

	zval property_sqlstate_default_value;
	ZVAL_UNDEF(&property_sqlstate_default_value);
	zend_string *property_sqlstate_name = zend_string_init("sqlstate", sizeof("sqlstate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sqlstate_name, &property_sqlstate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_sqlstate_name);

	zval property_errno_default_value;
	ZVAL_UNDEF(&property_errno_default_value);
	zend_string *property_errno_name = zend_string_init("errno", sizeof("errno") - 1, 1);
	zend_declare_typed_property(class_entry, property_errno_name, &property_errno_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_errno_name);

	return class_entry;
}

static zend_class_entry *register_class_mysqli_sql_exception(zend_class_entry *class_entry_RuntimeException)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "mysqli_sql_exception", class_mysqli_sql_exception_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_RuntimeException, ZEND_ACC_FINAL);

	zval property_sqlstate_default_value;
	zend_string *property_sqlstate_default_value_str = zend_string_init("00000", strlen("00000"), 1);
	ZVAL_STR(&property_sqlstate_default_value, property_sqlstate_default_value_str);
	zend_string *property_sqlstate_name = zend_string_init("sqlstate", sizeof("sqlstate") - 1, 1);
	zend_declare_typed_property(class_entry, property_sqlstate_name, &property_sqlstate_default_value, ZEND_ACC_PROTECTED, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_sqlstate_name);

	return class_entry;
}
