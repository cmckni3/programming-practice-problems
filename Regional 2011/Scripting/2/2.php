<?php
$count = 0;
$cases = 0;

$f = fopen("php://stdin", "r");
$cases = rtrim(fgets($f));
while ($count < $cases)
{
	$numBots = rtrim(fgets($f));
	$bots = array();
	for ($i = 0; $i < $numBots; $i++)
	{
		$bots[] = rtrim(fgets($f));
	}
	
	$numLines = rtrim(fgets($f));
	$botPresent = array();
	
	for ($i = 0; $i < $numLines; $i++)
	{
		$names = rtrim(fgets($f));
		$names = explode(' ', $names);
		foreach ($names as $name)
		{
			if (in_array($name, $names))
				$botPresent[$name] = 'present';
		}
	}
	
	echo "Test set ".($count+1).":\n";
	foreach ($bots as $bot)
	{
		echo $bot." is ";
		if(@$botPresent[$bot] == "present")
			echo "present\n";
		else
			echo "absent\n";
	}
	echo "\n";
	$count++;
}

?>