function factorialRecursive(n, a, b) {
  if (n === 0) {
    return b;
  } else {
    return factorialRecursive(n-1, a+1, a*b);
  }
}

function factorial(n) {
  return factorialRecursive(n, 1, 1);
}

function processData(input) {
  console.log(factorial(parseInt(input)));
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
