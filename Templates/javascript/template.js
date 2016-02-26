// Template used in node.js environment on codeeval
var fs  = require('fs');
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line != "") {
    // process line
  }
});
