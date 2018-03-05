import math
for x in range (1,50000000):
    s=0
    for i in str(x):
        s=s+math.factorial(int(i))
        if s==x:
            print s
