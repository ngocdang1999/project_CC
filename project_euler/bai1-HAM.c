#include <stdio.h>

#include <math.h>
void LuaChon(int z);
void kyTu(char k);
void GiaiPTBac1(int a, int b);
void GiaiPtBac2(float a, float b, float c);
void Hoanvi(int a , int b);
void min(int a , int b , int c , int d);
void sapxep(int a,int b);
void Xuat(int x);
void Nhap(int n ); 
int main()
{	
	int n, a, b, z, d , min;
	float x; 
	LuaChon(z);
}
void Nhap(int n)
{
	printf(" ");
	scanf("%d", &n);
}
void Xuat(int x)
{
	printf("     %d     ", x);
}
void LuaChon(int z)
{
	int a, b, c , d ;
	char  k;
	printf(" \n1 - Ky Tu in hoa sang ky tu thong \n 2 - Giai phuong trinh bac 1 \n 3 - Giai phuong trinh bac 2 \n 4 - Min cua 4 so nguyen \n 5 - hoan vi 2 so nguyen \n 6 - sap xep 4 so nguyen tang dan \n SO BAN MUON NHAP LA ? : ");
	scanf("%d", &z);
	if (z==1)
	{
	 fflush(stdin);
	 kyTu(k);
	}
	if (z == 2)
	{
		printf("Nhap   a = ");Nhap(a); 
		printf("\nNhap b =");Nhap(b);	
		GiaiPTBac1(a, b);
	}
	if(z==3) 
	{
		printf("Nhap   a = ");Nhap(a);
		printf("\nNhap   b = ");Nhap(b);
		printf("\nNhap   c = ");Nhap(c);
		GiaiPtBac2(a, b, c);
	}
	if(z==4)
	{
		printf("Nhap so thu 1 = ");Nhap(a);
		printf("Nhap so thu 2 = ");Nhap(b);
		printf("Nhap so thu 3 = ");Nhap(c);
		printf("Nhap so thu 4 = ");Nhap(d);
		
		min(a,b,c,d);
	
	}
	if (z==5)
	{
		printf("Nhap a = ");Nhap(a);
		printf("\n Nhap b= ");Nhap(b);
		Hoanvi(a,b);
	}
	if (z==6)
	{
		printf("Nhap   a = ");Nhap(a);
		printf("Nhap   b = ");Nhap(b);
		printf("Nhap   c = ");Nhap(c);
		printf("Nhap   d = ");Nhap(d);
		sapxep(a,b);
		sapxep(a,c);
		sapxep(a,d);
		sapxep(b,c);
		sapxep(b,d);
		sapxep(c,d);
		Xuat(a);
		Xuat(b);
		Xuat(c);
		Xuat(d);
		
	}
}
void kyTu(char k)
{
	char kyTu;
	printf("\nNhap ky tu hoa : ");
	scanf("%c", &kyTu);
	kyTu += 32; 
	printf("\nKy tu sau khi chuyen doi la: %c", kyTu);
}
void GiaiPTBac1(int a, int b)
{
	float x;
	if (a == 0)
	{
		if (b == 0)
		{
			printf("\vo so nghiem");
		}
		else 
		{
			printf("\nVo nghiem");
		}
	}
	else 
	{
		x = -b / (float)a;
		printf("x = %f", x);
	}
}
void GiaiPtBac2(float a, float b, float c)
{
	float delta;
	delta = (b * b) - (4 * a * c);
	if (delta > 0)
	{
		printf("sqrt of %f = %f\n", delta, sqrt(delta));
		float x1;
		x1 = (-b + sqrt(delta)) / (2 * a);
		printf("x1 = %f\n", x1);
		float x2;
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("x2 = %f\n", x2);
	}
	else if	(delta == 0)
	{
		float x;
		x = -b / (2 * a);
		printf("co ngiem kep la %f", x);
	}
	else 
	{
		printf("vo nghiem");
	}
}
void min(int a, int b , int c , int d)
{	int min;
	if (a<b && a<c && a<d) min=a;
	if (b<a && b<c && b<d) min=b;
	if (c<b && c<a && c<d) min=c;
	if (d<b && d<c && d<a) min=d;
	printf("So nho nhat la %d" , min);
}
void Hoanvi(int a , int b)
{	int x;
	x=a;
	a=b;
	b=x;
	printf("a=%d b=%d",a,b);
}
void sapxep(int a , int b)
{
	int t ;
	if (a>b)
	{
	
	t=a;
	a=b;
	b=t;
	}
}