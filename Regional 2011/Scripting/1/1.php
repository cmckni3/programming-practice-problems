<?php
$count = 0;
$cases = 0;
$data = array();

function add($number)
{
	if ($number == 1)
	{
		return 1;
	}
	else
	{
		return (add($number-1)+$number);
	}
}

$f = fopen("php://stdin", "r");
$cases = rtrim(fgets($f));
while ($count < $cases)
{
	$n = rtrim(fgets($f));
	echo $n." ";
	
	$sum = 1;
	for ($j = $n; $j > 1; $j--)
	{
		$sum += add($j);
	}
	echo $sum."\n";
	$count++;
}

// old code
/*foreach (file("php://stdin") as $line)
{
	$line = rtrim($line);
	if ($count == 0)
		$cases = $line;
	else
		$data[$count] = $line;
	$count++;
}

for ($i = 1; $i < $count; $i++)
{
	$n = $data[$i];
	echo $n." ";
	
	$sum = 1;
	for ($j = $n; $j > 1; $j--)
	{
		$sum += add($j);
	}
	echo $sum."\n";
}*/

?>