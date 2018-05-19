#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,d,e,f;
	float D,Dx,Dy;
	printf("Nhap vao cac he so:\n");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	/*ax+by=c
	  dx+ey=f*/
	D=a*e-b*d;
	Dx=-b*f+c*e;
	Dy=a*f-c*d;
	printf("\n%fx + %fy = %f", a,b,c);
	printf("\n%fx + %fy = %f", d,e,f);
	if(D==0&&Dx==0)
		printf("HE PHUONG TRINH VO SO NGHIEM");
	if(D==0&&Dx!=0)
		printf("HE PHUONG TRINH VO NGHIEM");
	if(D!=0)
	{
		float x,y;
		x=Dx/D;
		y=Dy/D;
		printf("\nNghiem cua he la:\n");
		printf("NGHIEM X=%.3f",x);
		printf("NGHIEM Y=%.3f",y);
	}
}
