#include <stdio.h>

#include <string.h>
int main()
{
char s[100];
printf("Nhap s:");
gets(s);
for(int i=0;i<strlen(s);i++)
{
if(s[i]>='A' && s[i]<'Z') 
s[i]=s[i]+32;
else
if(s[i]>='a' && s[i]<='z') 
s[i]=s[i]-32;
}
printf("\n Chuoi sau khi doi:");
puts(s);
}
