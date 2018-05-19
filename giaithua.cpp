#include<stdio.h>
int main()
{
		int s=1;
	int i,n;
	printf("Nhap so can tinh giai thua: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("Giai thua cua so la: %d",s);
}
