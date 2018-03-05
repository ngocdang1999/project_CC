#include <stdio.h> 
#include <math.h> 
long long tong(int);
long long tongbp(int);
float tongthuong(int);
long long tich(int);
long long tonggt(int);
int main()
{
	int n;
	long long s;
	float st;
	printf("Nhap so n: ");
	scanf("%d", &n);
	printf("\n");
	//////////////////
	s = tong(n);
	printf("1+2+...+n = %lld\n", s);
	///////////////
	s = tongbp(n);
	printf("1^2+2^2+...+n^2 = %lld\n", s);
	////////////
	st = tongthuong(n);
	printf("1+1/2+...+1/n = %f\n", st);
	//////////
	s = tich(n);
	printf("1*2*...*n = %lld\n",s);
	///////
	s = tonggt(n);
	printf("1!+2!+...+n! = %lld\n", s);
}
long long tong(int x)
{
	int i; 
	long long s = 0;
	for (i = 1; i <= x; i++)
		s = s + i;
	return s;
}
long long tongbp(int x)
{
	int i;
	long long s = 0;
	for (i = 1; i <= x; i++)
		s = s + pow(i,2);
	return s;
}
float tongthuong(int x)
{
	float i;
	float s = 0;
	for (i = 1; i <= x; i++)
		s = s + (1/i);
	return s;
}
long long tich(int x)
{
	int i;
	long long s = 1;
	for (i=1; i<=x; i++)
		s = s*i;
	return s;
}
long long tonggt(int x)
{
	int i;
	long long s = 0, tich = 1;
	for (i = 1; i <= x; i++)
		{
			tich = tich * i;
			s+= tich;
		}
	return s;	
}