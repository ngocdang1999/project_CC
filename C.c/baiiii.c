#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,deta,x1,x2;
    printf ("ax^2 +bx +c =o. nhap a: ");
    scanf ("%f",&a);
    printf ("nhap b: ");
    scanf ("%f",&b);
    printf ("nhap c: ");
    scanf ("%f",&c);
    if (a==0)
    {
        if (b==0)
        {
            if (c==0) printf ("PTVSN");
            else printf("PTVN");
        }
        else
        {
            x1 = (-c)/b;
            printf ("PTCN:%f",x1);
        }
    }
    else
    {
        deta=b*b-a*4*c;
        if (deta<0) printf("PTVN");
        if (deta==0)
        {
            x1=-b/(2*a);
            printf("PTCN:%f",x1);
        }
        if (deta>0)
        {
                        x1=(-b+sqrt(deta))/(2*a);
                        x2=(-b-sqrt(deta))/(2*a);
                        printf("Phuong trinh co 2 nghiem phan biet");
                        printf("%f",x1);
                        printf("%f",x2);
        }
    }

}
 



