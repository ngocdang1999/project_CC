#include <stdio.h>
int main ()
{
    int n,s1=0,i=1,s=0,s2=0,s3=0;
    printf ("Nhap n:");
    scanf ("%d",&n);
    if (n%2 ==0 )
    {
        for ( int i=1; i<n; )
        {
            s1=s1+i;
            i=i+2;
            if (i>n)
            {
               s=s1+n;
            } 
        }
    printf ("Tổng 1 %d \n",s);
    }
    else
    {
        for ( int i=0; i<n; )
        {
            s2=s2+i;
            i=i+2;
            if (i>n)
            {
               s3=s2+n;
            }
        }
        printf ("Tổng 2 %d \n",s3);
    }
}
