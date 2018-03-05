#include <stdio.h>
int main ()
{
    int s=0 , i=1 , dem=0 ,n;
    printf ( "Nhap n:" );
    scanf ("%d",&n);
    while (dem<n)
    {
        if ( i%2 == 0)
            {
	    dem++;
            s=s+i;
            }
        i++;    
    }
printf ("Tong:%d",s);
}
