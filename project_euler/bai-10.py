i= 2
a=0
while(i < 2000000):
   j = 2
   while(j <= (i/j)):
      if not(i%j): break
      j = j + 1
   if (j > i/j) : a=a+i 
   i=i+1 
  
print a 
