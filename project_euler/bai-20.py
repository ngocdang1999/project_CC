a=0
b=1
for i in range (100):
   if  i>1:
       b=b*i   
print b
str1=len(str(b))
str2=str(b)
for i in range (1, str1+1):
     a=a+int (str2 [i-1])
print a
