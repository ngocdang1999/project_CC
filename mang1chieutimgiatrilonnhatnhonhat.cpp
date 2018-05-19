#include<stdio.h>
int main()
{
	int a[200];
	int i,n;
	printf("Nhap so luong so sanh:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		printf("Nhap day so can so sanh %d:",i+1);
		scanf("%d",&a[i]);
		}
	{
	int max, min;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nGia tri lon nhat la: %d", max);
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\nGia tri nho nhat la: %d", min);
	}	
}
