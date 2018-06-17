#include<stdio.h>
int Tinh(int, int);
int main()
{
	int x, n;
	scanf("%d %d",&x,&n);
	Tinh(x,n);
	printf("Dap so: %d",Tinh(x,n));
}
int Tinh(int x, int n)
{
	int s=0,i,mu=1;
	for(i=1;i<=n;i++)
	{
		mu=mu*x;
		s=s+mu;
	}
	return s;
}
