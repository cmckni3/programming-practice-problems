<?php

$line = fgets(STDIN);

$n = $t1 = $t2 = $t3 = 0;

$arr = explode(" ", $line);

$n = $arr[0];
$t1 = $arr[1];
$t2 = $arr[2];
$t3 = $arr[3];

function distance($a, $b, $n)
{
  return (($b - $a) < 0) ? ($b - $a + $n) : ($b - $a);
}

while (true)
{
  if ($n == 0 && $t1 == 0 && $t2 == 0 && $t3 == 0) break;
  $ticks = (3*$n) + ($n - 1) + distance($t1, $t2, $n) + distance($t3, $t2, $n);

  echo $ticks."\n";
  $line = fgets(STDIN);
  $arr = explode(" ", $line);

  $n = $arr[0];
  $t1 = $arr[1];
  $t2 = $arr[2];
  $t3 = $arr[3];
}

?>
