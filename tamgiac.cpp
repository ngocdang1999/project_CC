#include<conio.h>
#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Nhap cac canh cua tam giac\n");
    printf("a= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);
    if ((a+b>=c)&&(b+c>=a)&&(c+a>=b))
    {
        printf("%f, %f, %f thoa man la 3 canh cua tam giac!\n\n",a,b,c);
        if ((a==b)&&((a!=c)||(b!=c)))
            printf("Tam giac Can tai C");
        else if ((a==c)&&((a!=b)||(c!=b)))
            printf("Tam giac Can tai B");
        else if ((c==b)&&((c!=a)||(b!=a)))
            printf("Tam giac Can tai A");
        else if((a==b)&&(b==c))
            printf("Tam giac Deu!");
        else if(a*a==b*b+c*c)
            printf("Tam giac Vuong tai A");
        else if(b*b==a*a+c*c)
            printf("Tam giac Vuong tai B");
        else if(c*c==b*b+a*a)
            printf("Tam giac Vuong tai C");
        else if ((a+b==c)||(c+b==a)||(c+a==b))
            printf("Tam giac bi Suy bien!");
        else
            printf("Tam giac Thuong!");
    }
    else
        printf("%f, %f, %f khong thoa man la 3 canh cua tam giac!\n",a,b,c);
    getch();
    return 0;
}  
