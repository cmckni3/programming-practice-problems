var LetterChanges = require('./letter-changes');

describe('LetterChanges', function(){

  it("should change letters", function(){
    expect(LetterChanges('hello*3')).toEqual('Ifmmp*3');
    expect(LetterChanges('hello world')).toEqual('Ifmmp xpsmE');
  });

});
