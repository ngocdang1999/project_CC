#include<stdio.h>
int main()
{
	int a,b,max,c,bcnn;
	printf("Nhap vao so nguyen thu nhat:");
	scanf("%d",&a);
	printf("Nhap vao so nguyen thu hai:");
	scanf("%d",&b);
	if(a>b)
		max=c=a;
	else
		max=c=b;
	while(1)
	{
		if(max%a==0&& max%b==0)
		{
			bcnn=max;
			break;
		}
		max=max+c;
	}
	printf("Boi chung nho nhat la: %d",bcnn);
}
