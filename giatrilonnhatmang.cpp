#include<stdio.h>
int main()
{
	int a[100];
	int i,max,n;
	printf("Nhap vao so phan tu trong day: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
	printf("Mang la: ");
	for(i=0;i<n;i++)
	{
		printf("%d        ",a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nGia tri lon nhat trong mang: %d",max);

}
