function processData(input) {
  var values = input.split('\n');
  var mealCost = parseFloat(values[0]);
  var tipPercent = parseInt(values[1]);
  var taxPercent = parseInt(values[2]);
  var tip = mealCost * tipPercent / 100;
  var tax = mealCost * taxPercent / 100;
  var total = (mealCost + tip + tax).toFixed(0);
  console.log('The total meal cost is', total, 'dollars.');
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
  _input += input;
});

process.stdin.on("end", function () {
 processData(_input);
});
