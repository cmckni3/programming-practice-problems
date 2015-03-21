var FirstReverse = require('./first_reverse');

describe('firstReverse', function(){
  var first_reverse = FirstReverse.firstReverse;

  it("should reverse hello", function(){
    expect(first_reverse('hello')).toEqual('olleh');
  });

  it("should reverse Hello World", function(){
    expect(first_reverse('Hello World')).toEqual('dlroW olleH');
  });

});
