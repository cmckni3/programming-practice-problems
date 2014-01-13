// For this challenge you will be adding up all the numbers from 1 to a certain argument.

module.exports = {
  // Power sum
  simpleAdding: function(n){
    return (n*(n+1))/2;
  },
  // NOTE: This is a substantially slower method
  // It is only here for demonstration purposes
  simpleAddingBruteForce: function(n){
    var total = 0;
    for (var i = 1; i < n + 1; i++)
      total = total + i
    return total;
  }
};
