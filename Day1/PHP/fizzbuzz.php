<?php
/**
 * @author willianwt
 * @date 16/01/2018
 */

$num = n; #any number will work
for ($i=1; $i <= $num; $i++) { 
  if ($i % 3 == 0 && $i % 5 == 0) {
    echo "FizzBuzz\n";
  } else if ($i % 3 == 0) {
   echo "Fizz\n";
  }else if ($i % 5 == 0) {
   echo "Buzz\n";
  }else{
    echo $i . "\n";
  }
  
}