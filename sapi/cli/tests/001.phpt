--TEST--
version string
--SKIPIF--
<?php include "skipif.inc"; ?>
--FILE--
<?php

$php = getenv('TEST_PHP_EXECUTABLE_ESCAPED');

var_dump(`$php -n -v`);

echo "Done\n";
?>
--EXPECTF--
string(%d) "PHP %s (cli) (built: %s)%s
Copyright (c) The PHP Group
%AZend Engine v%s, Copyright (c) Zend Technologies%A"
Done
