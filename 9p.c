#include<stdio.h>
#include<math.h>
int main()
{
    int m, n;
    printf("Nhap vao so cần tinh:  ");
    scanf("%d",&n);
    m= sqrt(n);
    if(m*m == n) 
    {
        printf("\n la so chinh phuong");
    }
    else 
    {
        printf("\n ko la so chinh phuong");
    }
}