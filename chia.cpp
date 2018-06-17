#include<stdio.h>
int main()
{
	int a[55];
	int n;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<=n;i++)
	{
		printf("%d    ",i);
		a[i]=i;
	}
	printf("\n");
	printf("Chia het cho 3 dau va 5 cuoi: \n");
	for(i=0;i<=n;i++)
	{
		if(a[i]%3==0)
		{
			printf("%d   ",a[i]);
		}

	}
	for(i=0;i<=n;i++)
	{
		if(a[i]%3!=0&&a[i]%5!=0)
		{
				printf("%d   ",a[i]);
		}
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]>0)
		{
			if(a[i]%5==0)
			{
				printf("%d   ",a[i]);
			}
		}
	}
	printf("\n");
	printf("Day ban dau: \n");
	for(i=0;i<=n;i++)
	{
		printf("%d    ",a[i]);
	}
	printf("\n");
	printf("Vi tri cac so le: \n");
	for(i=0;i<n;i++)
	{
			if(a[i]%2!=0)
			printf("%d    ",i+1);
	}
	printf("\n");
	printf("Vi tri cac so chia het cho 7: \n");
	for(i=0;i<n;i++)
	{
			if(a[i]%7==0)
			printf("%d    ",i+1);
	}
}

