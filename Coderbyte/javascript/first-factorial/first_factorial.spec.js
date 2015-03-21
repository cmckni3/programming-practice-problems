var FirstFactorial = require('./first_factorial');

describe('firstFactorial', function(){
  var first_factorial = FirstFactorial.firstFactorial;

  it("should equal 1", function(){
    expect(first_factorial(1)).toEqual(1);
  });

  it("should equal 120", function(){
    expect(first_factorial(5)).toEqual(120);
  });

  it("should equal 40320", function(){
    expect(first_factorial(8)).toEqual(40320);
  });

});
