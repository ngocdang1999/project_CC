#!/usr/bin/env python
a=1
b=1
total=0
while True:
    a, b = b,a+b
    if a < 4000000:
       if a % 2 == 0:
           total+=a
    else:
       break
print total

