#!/usr/bin/env ruby

=begin
  Author: Chris McKnight
  Date: January 16, 2013
  Purpose:
     Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
     If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

     For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

     Evaluate the sum of all the amicable numbers under 10000.
  Problem: Amicable Numbers
=end

# Takes ~0.5s to run when loading divisors from yml and ~6s

require 'yaml'
MAX = 10000
sum = 0
$divisors = { 1 => 0 }

if !File.exists?(File.expand_path('divisors.yml'))
  2.upto(MAX) do |i|
    divisors_of_i = []
    1.upto(i-1) do |j|
      divisors_of_i << j if i % j == 0
    end
    if divisors_of_i.size > 1
      $divisors[i] = divisors_of_i.inject(:+)
    else
      $divisors[i] = 0
    end
  end
  f = File.new('divisors.yml', 'w')
  f.write($divisors.to_yaml)
  f.close
else
  $divisors = Psych.load(File.read(File.expand_path('divisors.yml')))
end

def amicable(a, b)
  a, b = a.to_i, b.to_i
  return a == $divisors[b] && $divisors[a] == b && a != b
end

2.upto(MAX) do |i|
  begin
    if amicable(i, $divisors[i])
      sum = sum + i
    end
  rescue
    next
  end
end


puts "The answer is #{sum}"

