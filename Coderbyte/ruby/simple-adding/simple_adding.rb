#!/usr/bin/env ruby

require 'benchmark'

# For this challenge you will be adding up all the numbers from 1 to a certain argument.

# Power sum
def simple_adding(n)
  (n*(n+1))/2
end

# Alternative brute force method
# def simple_adding(n)
#   total = 0
#   1.upto(n) do |i|
#     total = total + i
#   end
#   total
# end

puts simple_adding(1)
puts simple_adding(2)
puts simple_adding(5)
puts simple_adding(10)
puts simple_adding(20)
puts simple_adding(400)