// Capitalize the first letter of each word that is separated by a space

module.exports = {
  letterCapitalize: function(str){
    var words = str.split(' ');
    var capitalizedWords = [];
    for (var i = 0; i < words.length; i++)
    {
      var word = words[i];
      capitalizedWords.push(word[0].toUpperCase() + word.slice(1));
    }
    return capitalizedWords.join(' ');
  }
};
