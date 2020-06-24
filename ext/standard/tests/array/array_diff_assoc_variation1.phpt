--TEST--
Test array_diff_assoc() function : usage variations  - unexpected values for 'arr1' argument
--FILE--
<?php
/* Prototype  : array array_diff_assoc(array $arr1, array $arr2 [, array ...])
 * Description: Returns the entries of $arr1 that have values which are not present
 * in any of the others arguments but do additional checks whether the keys are equal
 * Source code: ext/standard/array.c
 */

/*
 * Pass array_diff_assoc arguments that are not arrays in place of $arr1
 */

echo "*** Testing array_diff_assoc() : usage variations ***\n";

$array = array(1, 2, 3);

//get an unset variable
$unset_var = 10;
unset ($unset_var);

// get a class
class classA
{
  public function __toString() {
    return "Class A object";
  }
}

// heredoc string
$heredoc = <<<EOT
hello world
EOT;

// get a resource variable
$fp = fopen(__FILE__, "r");

//array of unexpected values to be passed to $arr1 argument
$inputs = array(

       // int data
/*1*/  0,
       1,
       12345,
       -2345,

       // float data
/*5*/  10.5,
       -10.5,
       12.3456789000e10,
       12.3456789000E-10,
       .5,

       // null data
/*10*/ NULL,
       null,

       // boolean data
/*12*/ true,
       false,
       TRUE,
       FALSE,

       // empty data
/*16*/ "",
       '',

       // string data
/*18*/ "string",
       'string',
       $heredoc,

       // binary data
/*21*/ b"binary",
       (binary)"binary",

       // object data
/*23*/ new classA(),

       // undefined data
/*24*/ @$undefined_var,

       // unset data
/*25*/ @$unset_var,

       // resource variable
/*26*/ $fp,
);

// loop through each element of $inputs to check the behavior of array_diff_assoc
$iterator = 1;
foreach($inputs as $input) {
    echo "\n-- Iteration $iterator --\n";
    try {
        var_dump(array_diff_assoc($input, $array));
    } catch (TypeError $e) {
        echo $e->getMessage(), "\n";
    }
    $iterator++;
};
fclose($fp);
echo "Done";
?>
--EXPECT--
*** Testing array_diff_assoc() : usage variations ***

-- Iteration 1 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, int given

-- Iteration 2 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, int given

-- Iteration 3 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, int given

-- Iteration 4 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, int given

-- Iteration 5 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, float given

-- Iteration 6 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, float given

-- Iteration 7 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, float given

-- Iteration 8 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, float given

-- Iteration 9 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, float given

-- Iteration 10 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, null given

-- Iteration 11 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, null given

-- Iteration 12 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, bool given

-- Iteration 13 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, bool given

-- Iteration 14 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, bool given

-- Iteration 15 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, bool given

-- Iteration 16 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, string given

-- Iteration 17 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, string given

-- Iteration 18 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, string given

-- Iteration 19 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, string given

-- Iteration 20 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, string given

-- Iteration 21 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, string given

-- Iteration 22 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, string given

-- Iteration 23 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, classA given

-- Iteration 24 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, null given

-- Iteration 25 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, null given

-- Iteration 26 --
array_diff_assoc(): Argument #1 ($arr1) must be of type array, resource given
Done
