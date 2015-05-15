var CaesarCipher = require('./caesar-cipher');

describe('caesarCipher', function(){
  it("should shift characters by 1", function(){
    expect(CaesarCipher.encode('abcdefghijk', 1)).toEqual('bcdefghijkl');
  });

  it("should preserve case", function(){
    expect(CaesarCipher.encode('ABC', 1)).toEqual('BCD');
  });

  it('should preserve non-alphabetical characters', function(){
    expect(CaesarCipher.encode('A B C', 1)).toEqual('B C D');
  });

  it('should shift characters by 2', function(){
    expect(CaesarCipher.encode('A B C', 2)).toEqual('C D E');
  });

  it('should wrap characters', function(){
    expect(CaesarCipher.encode('Z', 2)).toEqual('B');
  });
});
