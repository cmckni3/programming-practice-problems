#!/usr/bin/env python

import fileinput
import sys

data = sys.stdin.readlines()

str, ranges = data[0].rstrip("\n"), data[1].rstrip("\n").split(' ')
a, b, c, d = int(ranges[0]), int(ranges[1]), int(ranges[2]), int(ranges[3])

print str[a:b+1], str[c:d+1]

