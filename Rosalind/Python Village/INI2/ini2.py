#!/usr/bin/env python

import fileinput

for line in fileinput.input():
    a, b = line.split(' ')
    a, b = a.rstrip("\n"), b.rstrip("\n")
    c = (int(a)**2) + (int(b)**2)
    print c
