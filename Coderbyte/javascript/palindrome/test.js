function Palindrome(str) {
  str = str.replace(new RegExp(' ', 'g'), '');
  return (str.split('').reverse().join('') === str);
}

console.log(Palindrome('dont nod'));
console.log(Palindrome('do geese see god'));
