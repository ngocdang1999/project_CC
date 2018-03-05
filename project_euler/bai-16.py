a==2**1000
str1=len(str(a))
str2=str(a)
sum=0
for i in range (1, str1+1):
   sum = sum + int (str2[i-1])
print sum

