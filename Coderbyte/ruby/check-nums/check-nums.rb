def CheckNums(num1,num2)
  if num2 == num1
    return -1
  elsif num2 > num1
   return true
  else
    return false
  end
end

# keep this function call here
# to see how to enter arguments in Ruby scroll down
print CheckNums(STDIN.gets)
