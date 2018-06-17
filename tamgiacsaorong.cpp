#include<stdio.h>
int main()
{
	int h;
	printf("Nhap vao chieu cao h: ");
	scanf("%d",&h);
	int i,j,k;
	for(i=h;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		
		{
			if((j==1)||i==h||j==i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
