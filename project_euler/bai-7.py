i= 2
a=0
while(i < 105000):
   j = 2   
   while(j <= (i/j)):
      if not(i%j): break
      j = j + 1
   if (j > i/j)  :a=a+1  
   print i,a
   i=i+1 
  
  

