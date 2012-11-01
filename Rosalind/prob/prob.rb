#!/usr/bin/env ruby

=begin

=end

ARGF.read.split("\n").each do |line|
    A = line.split(' ').map(&:to_f)
    A.each do |x|
        c = g = x / 2
        a = t = (1 - x) / 2
        print (((c**2)+(a**2))*2).round(3).to_s + ' '
    end
    
end

puts