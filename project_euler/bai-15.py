def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
a,b = 20,20
print factorial(a+b) / (factorial(a) * factorial(b))
 
