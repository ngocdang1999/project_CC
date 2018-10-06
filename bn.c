#include<stdio.h>
int main()
{
    int i;
    float n;
    printf("Nhap so:   ");
    scanf("%f",&n);
    int m;
    m=n+n;
    if(m%2==0)
    {
        printf("/n K");
    }
    if(m%2!=0)
    {
        printf("/n co");
    }
}