#!/usr/bin/env ruby

=begin

=end

dna = ARGF.read.split("\n").first
dna.reverse.each_char do |d|
    case d
        when 'A'
            print 'T'
        when 'T'
            print 'A'
        when 'G'
            print 'C'
        when 'C'
            print 'G'
        end
end

puts