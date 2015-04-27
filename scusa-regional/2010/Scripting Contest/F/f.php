<?php

$cases = fgets(STDIN);
$count = 0;
$nums = 0;

while ($cases != 0) {
  $yes2 = array();
  $yescount = 0;
  $count = 0;
  $yes = array();
  while ($cases > $count) {
    $myarray = fgets(STDIN);
    $explodedarray = explode(" ", $myarray);

    for ($i = 1; $i < 50; $i++)
    {
      if (in_array($i, $explodedarray))
      {
        $yes[$i] = 1;
        if (!in_array($i, $yes2))
        {
          $yescount++;
        }
        $yes2[$i] = $i;
      }
      else
        $yes[$i] = 0;
    }

    $count++;
  }

  $yest = true;
  foreach($yes as $y)
  {
    if($y == 0)
      $yest = false;
  }

  if ($yescount == 49)
    print "Yes\n";
  else
  {
    print "No\n";
  }

  $cases = fgets(STDIN);
}

?>