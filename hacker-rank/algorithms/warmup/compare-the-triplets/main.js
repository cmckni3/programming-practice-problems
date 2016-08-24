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
  var a0_temp = readLine().trim().split(' ').map(Number);
  var b0_temp = readLine().trim().split(' ').map(Number);

  var alice = 0;
  var bob = 0;

  a0_temp.forEach(function(a0, i) {
    var b0 = b0_temp[i];
    if (a0 > b0) {
      alice += 1;
    } else if (a0 < b0) {
      bob += 1;
    }
  });

  console.log(alice, bob);
}
