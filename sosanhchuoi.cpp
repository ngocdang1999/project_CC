#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char str2[20];
	do
	{
		printf("Nhap chuoi 1: ");
		gets(str);
		printf("Nhap chuoi 2: ");
		gets(str2);
		 int x=strcmp(str,str2);
		 printf("X = %d", x);
		 if(x<0) printf("   => %s<%s",str,str2);
		 if(x>0) printf("   => %s>%s",str,str2);
		 if(x==0) printf("  => %s=%s",str,str2);
		 printf("\n");
	}while(strcmp(str,str2)!=0);
	return 0;
}

