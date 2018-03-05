#include <stdio.h>
int main()
{
    int n;
    printf ("Nhap n:");
    scanf ("%d",&n);
    if (n == 0) 
    {
        printf (" n la 0");
    }
    if (n>0)
    {
        if (n%2 != 0){
            printf ("N la so lẽ");
        }
        else 
        {
            printf ("N la so chẵn");
        }
    }
    
}
