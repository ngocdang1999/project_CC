#include <stdio.h>
int main()
{
    int n;
    long long giathua=1;
    printf("Nhap n");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++)
    {
        giathua=giathua *i;
    }
    printf ("%d!= %lld\n",n,giathua);
}
