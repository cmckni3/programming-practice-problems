#!/usr/bin/env ruby

=begin

=end

dna = ARGF.read.split("\n").first
print (dna.size - dna.gsub('A', '').size).to_s + ' ' + 
      (dna.size - dna.gsub('C', '').size).to_s + ' ' +
      (dna.size - dna.gsub('G', '').size).to_s + ' ' +
      (dna.size - dna.gsub('T', '').size).to_s + "\n"