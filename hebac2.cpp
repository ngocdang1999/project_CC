#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,denta;
	printf("Nhap vao he so a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	printf("\nHe phuong trinh bac hai: %fx^2 + %fx + %f=0",a,b,c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0) printf("\nPhuong trinh co vo so nghiem");
			else printf("\nPhuong trinh vo nghiem");
		}
		else
		{
		float x;
		x=-c/b;
		printf("\nNghiem cua phuong trinh: %f",x);
		}
	}
	else
	{
	denta=b*b-4*a*c;
	if(denta<0) printf("\nPhuong trinh vo nghiem voi denta be hon khong");
	if(denta==0)
		{
			float x2;
			x2=-b/2*a;
			printf("\nPhuong trinh co nghiem kep: %f",x2);
		}
	if(denta>0)
	{
		float x3,x4;
		x3=(-b-sqrt(denta))/(2*a);
		x4=(-b+sqrt(denta))/(2*a);
		printf("\nPhuong trinh co 2 nghiem phan biet: X1: %f X2: %f",x3,x4);
	}
	}
}
