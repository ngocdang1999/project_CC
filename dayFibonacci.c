#include<stdio.h>   
int main()  
{  
 int n1=0,n2=1,n3,i,s;  
 printf("Ban hay nhap so phan tu:   ");  
 scanf("%d",&s);  
 printf("\n%d ",n2);
 for(i=2;i<s;i++)   //vong lap bat dau tu 2 boi vi 0 va 1 da duoc in 
 {  
  n3=n1+n2;  
  printf(" %d",n3);  
  n1=n2;  
  n2=n3;  
 }  
}