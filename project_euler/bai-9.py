d=0
for a in range(1, 1000):  
     for b in range(a, 1000):  
         c = 1000vi-a-b  
         if c > 0:  
             if c*c == a*a + b*b:  
                 d = a*b*c 
                 break  
print d
