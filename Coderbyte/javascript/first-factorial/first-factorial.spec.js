var FirstFactorial = require('./first-factorial').firstFactorial;

describe('firstFactorial', function(){
  it("should equal 1", function(){
    expect(FirstFactorial(1)).toEqual(1);
  });

  it("should equal 120", function(){
    expect(FirstFactorial(5)).toEqual(120);
  });

  it("should equal 40320", function(){
    expect(FirstFactorial(8)).toEqual(40320);
  });

});
