var FirstReverse = require('./first-reverse').firstReverse;

describe('firstReverse', function(){
  it("should reverse hello", function(){
    expect(FirstReverse('hello')).toEqual('olleh');
  });

  it("should reverse Hello World", function(){
    expect(FirstReverse('Hello World')).toEqual('dlroW olleH');
  });

});
