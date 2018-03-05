def collatz_length(n):
    if n <= 1: return n
    length = 1
    while (n != 1):
      if (n % 2 == 0):
        n =n/ 2
      else:
        n = 3*n + 1
      length =length+ 1
    return length
a, b = 1, 0
 
for x in range( 1000000):
    l = collatz_length(x)
    if l > b: a, b = x, l 
         
print a
print b
