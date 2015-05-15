var SimpleAdding = require('./simple-adding').simpleAdding;

describe('simpleAdding', function(){

  it("should equal 0", function(){
    expect(SimpleAdding(0)).toEqual(0);
  });

  it("should equal 1", function(){
    expect(SimpleAdding(1)).toEqual(1);
  });

  it("should equal 3", function(){
    expect(SimpleAdding(2)).toEqual(3);
  });

  it("should equal 15", function(){
    expect(SimpleAdding(5)).toEqual(15);
  });

  it("should equal 55", function(){
    expect(SimpleAdding(10)).toEqual(55);
  });

  it("should equal 210", function(){
    expect(SimpleAdding(20)).toEqual(210);
  });

  it("should equal 80200", function(){
    expect(SimpleAdding(400)).toEqual(80200);
  });

});
