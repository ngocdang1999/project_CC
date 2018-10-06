#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,biendem=0;
    printf("Nhap so:   ");
    scanf("%d",&n);
    if(n>2)
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("khong la so nguyen tố");
            biendem=1;
            break;
        }
    }
    if(biendem==0)
    {   
        printf("la so nguyen to");
    }
    }
    else
    printf("Khong la so ngueyn to");
}