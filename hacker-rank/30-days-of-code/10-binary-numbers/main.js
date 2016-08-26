process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = '';
var input_stdin_array = '';
var input_currentline = 0;

process.stdin.on('data', function(data) {
  input_stdin += data;
});

process.stdin.on('end', function() {
  input_stdin_array = input_stdin.split("\n");
  main();
});

function readLine() {
  return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() {
  var n = parseInt(readLine());
  var base2 = n.toString(2);
  var previous = null;
  var consecutive = 0;
  var max = consecutive;
  for (i = 0; i < base2.length; i = i + 1)
  {
    if (base2[i] === '1')
    {
      consecutive += 1;
    }
    else
    {
      consecutive = 0;
    }
    max = consecutive > max ? consecutive : max;
    previous = base2[i];
  }
  console.log(max);
}
