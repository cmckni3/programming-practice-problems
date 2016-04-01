def SimpleSymbols(str)
  matches = str.scan(/(\+[A-Za-z]\+)/)
  num_letters = str.scan(/([A-Za-z])/)
  # code goes here
  return matches.length == num_letters.length
end

# keep this function call here
# to see how to enter arguments in Ruby scroll down
print SimpleSymbols('+z+z+z+')
