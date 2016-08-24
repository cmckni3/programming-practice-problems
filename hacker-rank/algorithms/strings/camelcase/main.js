process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = '';
var input_stdin_array = '';
var input_currentline = 0;

process.stdin.on('data', function (data) {
  input_stdin += data;
});

process.stdin.on('end', function () {
  input_stdin_array = input_stdin.split("\n");
  main();
});

function readLine() {
  return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() {
  var s = readLine().trim();

  var count = 1;

  for (var i = 1; i < s.length; i = i + 1) {
    if (s[i].toUpperCase() == s[i] && s[i-1].toLowerCase() == s[i-1]) {
      count += 1;
    }
  }

  console.log(count);
}
