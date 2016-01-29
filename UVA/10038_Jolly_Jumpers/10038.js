var fs  = require('fs');
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line != "") {
      numbers = line.split(/\s/).map(function(number) { return parseInt(number); });
      n = numbers.shift();
      diff = [];
      numbers.forEach(function(number, index) {
        if (index === (n - 1))
	  return;
        difference = Math.abs(numbers[index+1] - number);
	diff[difference] = difference;
      });

      is_jolly = true;
      for (var i = 1; i < n; i++) {
        if (typeof diff[i] === 'undefined' || diff[i] === null)
	  is_jolly = false;
      }
      
      if (is_jolly) {
          console.log('Jolly');
      } else {
          console.log('Not jolly');
      }
  }
});
