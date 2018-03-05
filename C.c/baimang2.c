#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][10],s=0,M=0;
    for (int i=0;i<5;i++)
    {   
        for (int n=0;n<10;n++)
        {
        a[i][n] =1+ rand()%99;
        printf ("So nguyen %d \n\n",a[i][n]);
        if (a[i][n]%2==0)
        {
            printf("So chan: %d \n",a[i][n]);
            s=s+a[i][n];
            printf("Tong:%d \n",s);
            printf("Vi tri:Hang:%d  Cot:%d \n\n",i, n);
        }
        }
    }
    for (int i=0;i<5;i++)
{
        for (int n=0;n<10;n++)
        if (a[i][n]>M)
        M =a[i][n];

}
printf(" Max %d \n",M);

}
