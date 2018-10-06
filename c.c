#include<stdio.h>
int main()
{
    int a=0;
    int i;
    for (i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
              a=a+i;
}
    printf("KQUA: %d",a);
}
