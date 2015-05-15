var LetterCapitalize = require('./letter-capitalize').letterCapitalize;

describe('letterCapitalize', function(){

  it("should capitalize correctly", function(){
    expect(LetterCapitalize('hello world')).toEqual('Hello World');
  });

});
