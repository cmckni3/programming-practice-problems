<?php
$line1 = fgets(STDIN);
$line2 = fgets(STDIN);

$lexp = explode(" ", $line1);
$a = explode(" ", $line2);

$m = $lexp[0];
$n = $lexp[1];
while ($m != 0 && $n != 0)
{
    $count = 0;
    while ($count < $n)
    {
    $b = array();
    $sum = 0;
    $max = -1;
    for($i = 0; $i < sizeof($a)-1; $i++)
    {
      $b[$i] = 0;
      for($j = $i; $j < sizeof($a); $j++)
      {
        if ($i != $j)
        {
          $b[$i] += $a[$i]*$a[$j];
        }
      }
      $sum += $b[$i];
      if ($b[$i] > $max)
      {
        $max = $b[$i];
        $maxi = $i;
      }
    }
    $sum = $sum - $b[$maxi];
    $a[$maxi] = 0;
    $count++;
    }
    echo $sum."\n";

$line1 = fgets(STDIN);
$line2 = fgets(STDIN);

$lexp = explode(" ", $line1);
$a = explode(" ", $line2);

$m = $lexp[0];
$n = $lexp[1];

}
?>
