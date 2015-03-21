var SimpleAdding = require('./simple_adding');

describe('simpleAdding', function(){
  var simple_adding = SimpleAdding.simpleAdding;

  it("should equal 0", function(){
    expect(simple_adding(0)).toEqual(0);
  });

  it("should equal 1", function(){
    expect(simple_adding(1)).toEqual(1);
  });

  it("should equal 3", function(){
    expect(simple_adding(2)).toEqual(3);
  });

  it("should equal 15", function(){
    expect(simple_adding(5)).toEqual(15);
  });

  it("should equal 55", function(){
    expect(simple_adding(10)).toEqual(55);
  });

  it("should equal 210", function(){
    expect(simple_adding(20)).toEqual(210);
  });

  it("should equal 80200", function(){
    expect(simple_adding(400)).toEqual(80200);
  });

});
