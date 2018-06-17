#include<stdio.h>
int main()
{
	int i,s=0,n,k=1;
	while(k=1)
	{
	printf("Nhap vao so nguyen  duong n: (n<10 mu 3):  ");
	scanf("%d",&n);
	if(n<10000)
	{
	for(i=1;i<=n;i++)
		{
		if(i%2!=0)
			s=s+i*i;
		else
			s=s-i*i;
		}
	printf("tinh: %d ", s);
	k=0;
	break;
	}
	else
	{
	k=1;
	printf("Ban nhao sai");
	}
	}
}
