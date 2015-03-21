BinaryConverter = require './binary_converter'

describe 'toBinary', ->
  toBinary = BinaryConverter.toBinary
  it "should equal 0", ->
    expect(toBinary('0')).toEqual 0

  it "should equal 1", ->
    expect(toBinary('1')).toEqual 1

  it "should equal 2", ->
    expect(toBinary('10')).toEqual 2

  it "should equal 2", ->
    expect(toBinary('010')).toEqual 2

  it "should equal 3", ->
    expect(toBinary('11')).toEqual 3

  it "should equal 4", ->
    expect(toBinary('100')).toEqual 4
