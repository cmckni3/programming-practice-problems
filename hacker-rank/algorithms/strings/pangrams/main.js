var alphabet = [
    'a',
    'b',
    'c',
    'd',
    'e',
    'f',
    'g',
    'h',
    'i',
    'j',
    'k',
    'l',
    'm',
    'n',
    'o',
    'p',
    'q',
    'r',
    's',
    't',
    'u',
    'v',
    'w',
    'x',
    'y',
    'z'
];

function processData(input) {
    input = input.toLowerCase();
    var letters_not_found = alphabet.map(function(letter) {
        return input.indexOf(letter) >= 0;
    })
    .filter(function(v) { return v; });

    if (letters_not_found.length === alphabet.length) {
        console.log('pangram');
    } else {
        console.log('not pangram');
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
