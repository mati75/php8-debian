--TEST--
oci_lob_write()/erase()/read() with CLOBs
--SKIPIF--
<?php
$target_dbs = array('oracledb' => true, 'timesten' => false);  // test runs on these DBs
require(__DIR__.'/skipif.inc');
?>
--FILE--
<?php

require __DIR__.'/connect.inc';
require __DIR__.'/create_table.inc';

$ora_sql = "INSERT INTO
                       ".$schema.$table_name." (Clob)
                      VALUES (empty_Clob())
                      RETURNING
                               clob
                      INTO :v_clob ";

$statement = oci_parse($c,$ora_sql);
$clob = oci_new_descriptor($c,OCI_D_LOB);
oci_bind_by_name($statement,":v_clob", $clob,-1,OCI_B_CLOB);
oci_execute($statement, OCI_DEFAULT);

var_dump($clob);

$str = "     this is a biiiig faaat test string. why are you reading it, I wonder? =)";
var_dump($clob->write($str));
var_dump($clob->erase(10,20));

oci_commit($c);

$select_sql = "SELECT clob FROM ".$schema.$table_name." FOR UPDATE";
$s = oci_parse($c, $select_sql);
oci_execute($s, OCI_DEFAULT);

var_dump($row = oci_fetch_array($s));

var_dump($row[0]->read(2));
var_dump($row[0]->read(5));
var_dump($row[0]->read(50));

var_dump($clob->erase());
var_dump($clob->erase(-10));
var_dump($clob->erase(10,-20));
var_dump($clob->erase(-10,-20));

var_dump(oci_lob_erase($clob));
var_dump(oci_lob_erase($clob,-10));
var_dump(oci_lob_erase($clob,10,-20));
var_dump(oci_lob_erase($clob,-10,-20));

unset($clob->descriptor);
var_dump(oci_lob_erase($clob,10,20));

require __DIR__.'/drop_table.inc';

echo "Done\n";

?>
--EXPECTF--
object(OCI-Lob)#%d (1) {
  ["descriptor"]=>
  resource(%d) of type (oci8 descriptor)
}
int(77)
int(20)
array(2) {
  [0]=>
  object(OCI-Lob)#%d (1) {
    ["descriptor"]=>
    resource(%d) of type (oci8 descriptor)
  }
  ["CLOB"]=>
  object(OCI-Lob)#%d (1) {
    ["descriptor"]=>
    resource(%d) of type (oci8 descriptor)
  }
}
string(2) "  "
string(5) "   th"
string(50) "is                     st string. why are you read"

Warning: OCI-Lob::erase(): ORA-22990: LOB locators cannot span transactions in %s on line %d
bool(false)

Warning: OCI-Lob::erase(): Offset must be greater than or equal to 0 in %s on line %d
bool(false)

Warning: OCI-Lob::erase(): Length must be greater than or equal to 0 in %s on line %d
bool(false)

Warning: OCI-Lob::erase(): Offset must be greater than or equal to 0 in %s on line %d
bool(false)

Warning: oci_lob_erase(): ORA-22990: LOB locators cannot span transactions in %s on line %d
bool(false)

Warning: oci_lob_erase(): Offset must be greater than or equal to 0 in %s on line %d
bool(false)

Warning: oci_lob_erase(): Length must be greater than or equal to 0 in %s on line %d
bool(false)

Warning: oci_lob_erase(): Offset must be greater than or equal to 0 in %s on line %d
bool(false)

Warning: oci_lob_erase(): Unable to find descriptor property in %s on line %d
bool(false)
Done
