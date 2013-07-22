#!/usr/bin/env ruby

=begin

=end

pairs = ARGF.read.split("\n")
p1 = pairs.first
p2 = pairs[1]

different_count = 0
count = p1.length - 1
for i in 0..count
  different_count = different_count + 1 if p1[i] != p2[i]
end

puts different_count
