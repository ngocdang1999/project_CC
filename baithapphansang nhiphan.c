#include<stdio.h>
int main ()
{   
	int n;	
	scanf("%d",&n);
	char s[100];int dem=1;
	while (n>0)
	{
		if ((n%2)==1) s[dem]='1';
		else s[dem]='0';
		n=n/2;
		dem++;
	}
	for (int i=dem-1 ; i>=1;i--)
	printf("%c",s[i]);
}

