function VowelCount(str) { 
  var vowels = ['a', 'e', 'i', 'o', 'u'];
  var count = 0;
  for (var i = 0; i < str.length; i++)
  {
    if (vowels.indexOf(str[i]) !== -1)
      count++;
  }
  return count;
}
