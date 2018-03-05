#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],s=0,M=0;
    for (int i=0;i<10;i++)
    {
        a[i] =1+ rand()%99;
        printf ("So nguyen %d \n",a[i]);
    }
    for (int i=0;i<10;i++)
    {
        if (a[i]%2==0)
        {
            printf("So chan: %d \n",a[i]);
            s=s+a[i];
            printf("Tong:%d \n",s);
            printf("vi tri:%d \n",i);
        }
    }
    for (int i=0;i<10;i++)
{
	if (a[i]>M)
	M =a[i];

}
printf("%d \n",M);

}
