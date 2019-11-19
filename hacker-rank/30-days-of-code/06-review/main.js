function processData(input) {
  var split_input = input.split('\n');
  var t = parseInt(split_input[0]);
  split_input = split_input.slice(1);
  for (var i = 0; i < t; i = i + 1) {
    var test_case = split_input[i].split('');
    var even_index_letters = test_case.map(function(l, index) {
      if (index % 2 == 0) {
        return l;
      }
      return null;
    }).filter(function(l) { return l !== null; }).join('');
    var odd_index_letters = test_case.map(function(l, index) {
      if (index % 2 == 1) {
        return l;
      }
      return null;
    }).filter(function(l) { return l !== null; }).join('');
    process.stdout.write(even_index_letters);
    process.stdout.write(' ');
    process.stdout.write(odd_index_letters + '\n');
  }
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
