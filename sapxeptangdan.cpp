#include<stdio.h>
int main()
{
	int b[200];
	int i,n,t,z,h;
	printf("Nhap so luong so sanh:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		printf("Nhap day so can so sanh %d:",i+1);
		scanf("%d",&b[i]);
		}
	printf("\nDay so truoc sap xep:\n");
	for(i=0;i<n;i++)
		{
		printf("%d  ",b[i]);
		}
	{
		for(z=0;z<n-1;z++)
		for(h=z+1;h<n;h++)
			if(b[z]>b[h])
				{	
					t=b[z];
					b[z]=b[h];
					b[h]=t;
				}
	printf("\nDay so sau khi sap xep:\n");
		for(i=0;i<n;i++)
		{
		printf("%d  ",b[i]);
		}
	}
}
