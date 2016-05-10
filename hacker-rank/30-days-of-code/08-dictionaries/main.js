function processData(input) {
  var split_input = input.split('\n');
  var N = parseInt(split_input.slice(0, 1));
  var phone_book = {};
  // populate phone book
  split_input = split_input.slice(1);
  for (var i = 0; i < N; i = i + 1) {
    var entry = split_input[i].split(' ');
    var name = entry[0];
    var phone_number = entry[1];
    phone_book[name] = phone_number;
  }
  var queries = split_input.slice(N).filter(function(q) { return q !== null && q !== ''; });
  for (var j = 0; j < queries.length; j = j + 1) {
    var query = queries[j];
    if (typeof phone_book[query] !== 'undefined' && phone_book[query] !== null) {
      console.log(query + '=' + phone_book[query]);
    } else {
      console.log('Not found');
    }
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
