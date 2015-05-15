var alphabet = [];
for (var i = 'a'.charCodeAt(0); i <= 'z'.charCodeAt(0); i++)
{
  alphabet.push(String.fromCharCode(i));
}

module.exports = {
  encode: function(str, key)
  {
    return str.split('').map(function(character){
      if (character.toLowerCase().charCodeAt(0) >= 'a'.charCodeAt(0) && character.toLowerCase().charCodeAt(0) <= 'z'.charCodeAt(0))
      {
        if (character.toLowerCase() !== character)
        {
          shiftedLetter = alphabet[(character.charCodeAt(0) + key - 'A'.charCodeAt(0)) % 26];
          return shiftedLetter.toUpperCase();
        }
        else
        {
          return alphabet[(character.charCodeAt(0) + key - 'a'.charCodeAt(0)) % 26];
        }
      }
      else return character;
    }).join('');
  }
};
