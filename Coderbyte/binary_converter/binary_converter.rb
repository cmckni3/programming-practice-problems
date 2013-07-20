#!/usr/bin/env ruby

# TDD
require 'rspec'

# Have the function BinaryConverter(str) return the decimal form of the binary value.
# For example: if 101 is passed return 5, or if 1000 is passed return 8. 
def toBinary(str)
  number = 0
  counter = str.length - 1
  counter.downto(0) do |c|
    position = counter - c
    number += str[position].to_i * (2 ** c)
  end
  return number
end

describe 'toBinary' do
  it "should equal 0" do
    toBinary('0').should equal 0
  end

  it "should equal 1" do
    toBinary('1').should equal 1
  end

  it "should equal 2" do
    toBinary('10').should equal 2
  end
  it "should equal 2" do
    toBinary('010').should equal 2
  end

  it "should equal 3" do
    toBinary('11').should equal 3
  end

  it "should equal 4" do
    toBinary('100').should equal 4
  end
end
