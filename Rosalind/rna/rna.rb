#!/usr/bin/env ruby

=begin

=end

dna = ARGF.read.split("\n").first
puts dna.gsub!('T', 'U')