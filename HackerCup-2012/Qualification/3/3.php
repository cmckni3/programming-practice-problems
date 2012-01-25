<?php
$count = 0;
$cases = 0;

$f = fopen("php://stdin", "r");
$cases = rtrim(fgets($f));
while ($count < $cases)
{
  $words = 0;
  $letters = array('H' => 0, 'A' => 0, 'C' => 0, 'K' => 0, 'E' => 0, 'R' => 0, 'U' => 0, 'P' => 0);
  $line = fgets($f);
  for ($i = 0; $i < strlen($line); $i++)
  {
      if (array_key_exists($line[$i], $letters))
          $letters[$line[$i]]++;
  }
  $letters['C'] = floor($letters['C'] / 2);
  $words = min($letters);
  echo "Case #".($count+1).": ".$words."\n";
	$count++;
}

?>