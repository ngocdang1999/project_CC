#include "stdio.h"
#include "conio.h"
int main()
{
	char c;
        int i;
	long int decimal=0;
        printf("\nBan cho vao so nhi phan:");
	while ((c=getche())!='\r')
	{
		if (c=='0' || c=='1')
		{
			i=c-'0';
                        decimal=2*decimal+i;
		}
		else if (c!='\r')
		{
        	        decimal=0;
			printf("\nBan da nhap sai . Yeu cau nhap lai!!!!");
                        printf("\nBan cho vao so nhi phan:");
                } 
	}
	printf("\nSo thap phan tuong ung la %d",decimal);
        getch();
}
