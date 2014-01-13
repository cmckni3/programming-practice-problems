// For this challenge you will be determining the factorial for a given number.

// loop version
module.exports = {
  firstFactorial: function(n){
    var product = 1;
    for (var i = 1; i < n + 1; i++)
    {
      product = product*i;
    }
    return product;
  },
  firstFactorialRecursive: function(n){
    if (n === 1)
      return 1;
    else
      return n*firstFactorialRecursive(n-1);
  }
};
