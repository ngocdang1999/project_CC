#include<conio.h>
#include<stdio.h>
int main()
{
 int a,b;
 printf("Nhap so nguyen a,b: ");
 scanf("%d %d",&a,&b);
while(a!=b)
{
	if(a>b)
	{
		a=a-b;
	}
	else
	{
		b=b-a;
	}
	printf("UCLN cua 2 so la: %d",a);
}
}
