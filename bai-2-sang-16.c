\#include "stdio.h"
#include "conio.h"
int main()
{
	char c;
        int i;
	long int decimal=0;
        printf("Nhap so nhi phan:");
    	printf("\n");
    // he 2 sang 10
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
	printf("SO HE 10:%d \n\n",decimal);
	// he 10 sang 16
	int n;
	n=decimal;
	printf("SO HE 16: %X \n\n",n);
	// he 16 sang 10
	int m;
	m=n;
	printf("SO HE 10: %d",m);
	return 0;
}
