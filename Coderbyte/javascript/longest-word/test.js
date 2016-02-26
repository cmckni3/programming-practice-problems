function trimPunctuation(str){
  var matches = str.match(/[A-Z0-9]/gi);
  if (matches)
    return matches.join('');
  return '';
}

function LongestWord(sen) {
  sen = sen.split(' ');
  var longestWord = '';
  sen.map(function(word){
    var wordWithoutPunctuation = trimPunctuation(word);
    if (wordWithoutPunctuation.length > trimPunctuation(longestWord).length)
      longestWord = word;
  });
  return longestWord;
}

console.log(LongestWord('a b c!! dee'));
