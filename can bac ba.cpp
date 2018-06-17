#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,s=0,i,b,k=1;
	while(k=1)
	{
	printf("Nhap vao khoang A, B:");
	scanf("%d   %d",&a,&b);
	if(a>0&&b>0)
	{
		if(a<b)
		{
		printf("SO CAN BAC BA: ");
		for(i=2;i*i*i<b;i++)
			printf("%d   ",i);
		}
		else
		{
		printf("SO CAN BAC BA: ");
		for(i=2;i*i*i<a;i++)
			printf("%d   ",i);
		}
		break;
	}
	else
	{
	k=1;
	printf("Pan nhap sai vui long nhap lai: \n");
	}
	}
}
