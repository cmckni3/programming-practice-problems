# Have the function BinaryConverter(str) return the decimal form of the binary value.
# For example: if 101 is passed return 5, or if 1000 is passed return 8.
module.exports =
  toBinary: (str) ->
    number = 0
    counter = str.length - 1
    for c in [counter..0]
        position = counter - c
        number += parseInt(str[position], 10) * Math.pow(2, c)
    return number
