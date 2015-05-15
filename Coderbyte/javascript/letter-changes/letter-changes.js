module.exports = function LetterChanges(str) {
  var vowels = ['a', 'e', 'i', 'o', 'u'];
  var str2 = [];
  for (var i = 0; i < str.length; i++)
  {
    var charCode = str[i].charCodeAt(0);
    if ( (charCode >= 'a'.charCodeAt(0) && charCode <= 'z'.charCodeAt(0))
        || (charCode >= 'A'.charCodeAt(0) && charCode <= 'Z'.charCodeAt(0) ) )
    {
      str2.push(String.fromCharCode(charCode + 1));
      for (var j = 0; j < vowels.length; j++)
      {
        str2[i] = str2[i].replace(new RegExp(vowels[j], 'g'), vowels[j].toUpperCase());
      }
   }
   else
    str2.push(str[i]);
  }
  return str2.join('');
}
