#include<stdio.h>
int main()
{
	int n,s=0,i;
	FILE *f;
	f=fopen("C:\\Users\\DANG\\Documents\\test.txt","rt");
		fscanf(f,"%d",&n);
	for(i=1;i<=n;i++)
		{
		if(i%2!=0)
			s=s+i*i;
		else
			s=s-i*i;
		}
	printf("tinh: %d ", s);
}
