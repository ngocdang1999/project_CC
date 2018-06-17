#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<math.h>
    void Nhap(int[],int);
    void Xuat(int[],int);
    int DemSoNguyenTo(int[],int,int,int,int, int);
    int TongSoNguyenTo(int[],int,int, int,int,int,int);
    int SoLuongLonHonK(int[],int,int);
    int XoaPhanTuTaiViTri(int[],int,int,int);
    int XoaPhanTuBangSoK(int[],int,int,int);
    int ChenGiaTriKVaoViTriJ(int[],int,int,int,int);
int main()
{	
    int n,i,b,tong=0;
    int j,biendem=0,k=1;
    int a[10];
    printf("Nhap n:");
    scanf ("%d",&n);
    int vitri,e,g;
    printf("Phan tu lon hon so k:");
	scanf("%d",&g);
	printf("Nhap vao vi tri can xoa:");
	scanf("%d",&vitri);
	printf("Xoa nhung phan tu bang so k:");
	scanf("%d",&e);	
    Nhap(a,n);
    Xuat(a,n);
    DemSoNguyenTo(a,n,k,biendem,j,i);
    TongSoNguyenTo(a,n,k,biendem,j,i,tong);
    SoLuongLonHonK(a,n,g);
	XoaPhanTuTaiViTri(a,n,i,vitri);
	XoaPhanTuBangSoK(a,n,i,e);
	ChenGiaTriKVaoViTriJ(a,n,i,e,vitri);
}
void Nhap(int a[], int n)
{
	srand(time(NULL));
	for (int i=1;i<=n;i++)
    {	
   	
	 a[i] = rand()%99 + 1;
    }
}
void Xuat(int a[],int n)
{
    for (int i=1;i<=n;i++)
    {
        printf("So trong mang %d",i);
        printf(": %d\n",a[i]);
    }
printf("\n");
}
int DemSoNguyenTo(int a[],int n,int k, int biendem,int j, int i)
{
	for (i=1;i<=n;i++)
	{
		if(a[i]<2)k=0;
		else
		{
			for(j=2;j*j<=a[i];j++)
			if(a[i]%j==0)
			{
				k=0;
				printf("K la so nguyen to : %d\n",a[i]);
				break;
			}
			if(k==1)
			{
				biendem++;
				printf("So nguyen to : %d\n",a[i]);
			}
		k=1;
		}
	}
	printf("SO NGUYEN TO  TRONG MANG : %d\n\n",biendem);
	return biendem;
}
int  TongSoNguyenTo(int a[],int n,int k, int biendem,int j, int i,int tong)
{
	for (i=1;i<=n;i++)
	{
		if(a[i]<2)k=0;
		else
		{
			for(j=2;j*j<=a[i];j++)
			if(a[i]%j==0)
			{
				k=0;
				break;
			}
			if(k==1)
			{
				tong=tong+a[i];
				biendem++;
			}
		k=1;
		}
	}
	printf("TONG CAC SO NGUYEN TO : %d\n\n",tong);
	return biendem;
}
int  SoLuongLonHonK(int a[],int n,int g)
{
	int i,soluong=0;
	
	for (i=1;i<=n;i++)
	{	
		if (a[i]>g)
			soluong=soluong+1;
	}
	printf("SO LUONG LON HON SO K NHAP VAO:%d\n\n",soluong);
}
int XoaPhanTuTaiViTri(int a[],int n,int i, int vitri)
{
	for (i= vitri;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;

for (i=1;i<=n;i++)
	printf("Mang con lai : %d\n",a[i]);
}
int XoaPhanTuBangSoK(int a[],int n,int i,int e)
{
	int j,s=0;

	for(i=1;i<=n;i++)
	 	if(a[i]==e)
		{
			s=s+1;
		}	
	printf("\n");
	printf("Tong so bang k xoa duoc: %d\n",s);
}
int ChenGiaTriKVaoViTriJ(int a[],int n,int i, int e,int vitri)
{
	for(i=n;i>=vitri;i--)
	{
		a[i]=a[i-1];
	}
	a[vitri]=e;
	n++;
	printf("Mang sao khi chen: ");
	for(i=1;i<n;i++)
	printf("%d\n",a[i]);
}
