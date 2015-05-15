var BinaryConverter = require('./binary-converter');

describe('toBinary', function(){
  var toBinary = BinaryConverter.toBinary;

  it("should equal 0", function(){
    expect(toBinary('00')).toEqual(0);
  });

  it("should equal 0", function(){
    expect(toBinary('0')).toEqual(0);
  });

  it("should equal 1", function(){
    expect(toBinary('1')).toEqual(1);
  });

  it("should equal 2", function(){
    expect(toBinary('10')).toEqual(2);
  });

  it("should equal 2", function(){
    expect(toBinary('010')).toEqual(2);
  });

  it("should equal 3", function(){
    expect(toBinary('11')).toEqual(3);
  });

  it("should equal 4", function(){
    expect(toBinary('100')).toEqual(4);
  });
});
