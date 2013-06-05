#!/usr/bin/env ruby

# For this challenge you will be determining the factorial for a given number.

# def first_factorial(n)
#   if n == 1
#     1
#   else
#     n*first_factorial(n-1)
#   end
# end

# Alternative version using upto
def first_factorial(n)
  product = 1
  1.upto(n) do |i|
    product = product*i
  end
  product
end

# Alternative version using a loop
def first_factorial(n)
  product = 1
  while n > 0
    product = product*n
    n = n - 1
  end
  product
end

puts first_factorial(8)
puts first_factorial(5)
