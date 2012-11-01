#!/usr/bin/env ruby

=begin

=end

percentage = 0
max_id = ''
max = -1

ARGF.read.split("\n").join('').split('>').each do |section|
    next if section.empty?
    id_end = section.index('_') + 4
    id = section[0..id_end]
    str = section.gsub(id, '')
    percentage = (str.scan('G').size + str.scan('C').size) / str.size.to_f * 100
    if percentage > max
        max = percentage
        max_id = id
    end
end

puts max_id
puts max.round(4).to_s + '%'