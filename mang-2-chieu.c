#include<stdio.h>
#include<stdlib.h>

int Docmatranvuong(int[][10],char[]);
void xuatmatran(int[][10],int);
int xuatgtricot(int[][10],int,int);
void xuatgtridong(int[][10],int,int);
long tong2duongcheo(int[][10],int);
int kiemtragtri(int[][10],int,int);
void xuatvitrigtri(int[][10],int,int);
int thaythegtri(int[][10],int,int,int);
int Demgtri(int[][10],int,int);
int tonglancan(int[][10],int,int);
int HinhXoanOcTang(int[][10],int,int[]);
int HinhXoanOcGiam(int[][10],int);


main(int argc,char *argv[])
{ 	int k,c,d,h,m,g,q,w,t,u;
	printf("Mang 2 chieu \n");
	char mang2chieu[] ="C:\\Users\\DANGG\\Documents\\test.txt";
	int a[10][10];
	int n= Docmatranvuong(a,mang2chieu);
	//////////////////////////
	xuatmatran(a,n);
	/////////////////////////
	printf("Nhap vao cot can xuat: ");
	scanf("%d",&d);	
	xuatgtricot(a,n,d);
	printf("\n");
	/////////////////////////////
	printf("Nhap vao dong can xuat: ");
	scanf("%d",&c);
	xuatgtridong(a,n,c);
	printf("\n");
	///////////////////////////////
	tong2duongcheo(a,n);
	printf("Tong 2 duong cheo: %d",tong2duongcheo(a,n));
	printf("\n");
	////////////////////////////////////////
	printf("Nhap vao gia tri K can kiem: ");
	scanf("%d",&m);
	kiemtragtri(a,n,m);
		h=kiemtragtri(a,n,m);
		if(h==1)
			printf("Co gia tri k trong mang");
		else
			printf("Khong co gia tri k trong mang");
	//////////////////////////////////////////////////
	printf("\n");
	printf("Nhap vao gia tri K can kiem: ");
	scanf("%d",&k);
	xuatvitrigtri(a,n,k);
	///////////////////////////////////////////////////////
	printf("\n");
	printf("Nhap vao gia tri K can kiem: ");
	scanf("%d",&g);
	printf("Nhap vao gia tri Q can thay the khi K co trong mang: ");
	scanf("%d",&q);
	thaythegtri(a,n,g,q);
	////////////////////////////////////////////////////////////
	printf("Nhap vao gia tri K can dem: ");
	scanf("%d",&w);
	Demgtri(a,n,w);
	printf("Tong so K co trong mang la: %d",Demgtri(a,n,w));
	printf("\n");
	///////////////////////////////////////////////////////////////
	printf("Nhap de tinh vi tri lan can: ");
	scanf("%d",&k);
	tonglancan(a,n,k);
	printf("Tong cac so lan can: %d",tonglancan(a,n,k));
	printf("\n");
	//////////////////////////////////////////////////////////////////////
	int b[50];
	printf("Ma tran xoan oc tang:\n");
	HinhXoanOcTang(a,n,b);

	/////////////////////////////////////////////////////////////////////////
	printf("Ma tran xoan oc giam:\n");
	HinhXoanOcGiam(a,n);

	
	getch();
}
/*
	chucn

	int Docdaysotufile(int a[], char st[]){
	FILE *f;
	int i = 0;
	f = fopen(st, "rt");
	while(!feof(f)) fscanf(f, "%d", &a[i++]);
	fclose(f);
	return i;



#include<stdio.h>
int docmatran(int [][10], char);
void xuatmatran(int [][10], int);
int main()
{
	int a[10][10];
	char str[]="     ";
	int n=docmatran(a,str);
	xuatmatran(a,n);
}
int docmatran(int a[10][10], char str)
{
	FILE *f;
	int n;
	f=fopen(str,"rt");
	fscanf(f,"%d",&n);
	for(i=0;i<n;i++)
		 for(j=0;j<n;j++)
		 {
			 fscanf(f,"%d",&a[i][j])
		 }
	fclose(f);
	return(n);
}
void xuatmatran(int a[10][10], int n)
{
	for(i=0;i<n;i++)
		 for(j=0;j<n;j++)
		 {
			 sprintf("%d",&a[i][j])
		 }
}
}
*/
int Docmatranvuong(int a[][10],char mang2chieu[])
{
	FILE *f;
	int n;
	
	f= fopen(mang2chieu,"rt");
	fscanf(f,"%d",&n);
	
	int i,j;
	for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				fscanf(f,"%d",&a[i][j]);
	fclose(f);
	return n;	
}
void xuatmatran(int a[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
}
int xuatgtricot(int a[][10],int n,int d)
{	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i][d-1]);
}
void xuatgtridong(int a[][10],int n,int c)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[c-1][i]);
}
long tong2duongcheo(int a[][10], int n)
{
	int i, j, s = 0;
	for(i = 0; i < n; i++)
			s+= a[i][i];
	for(i = n - 1; i > -1; i--)
			s+= a[i][n-i-1];
	return s;
}
int kiemtragtri(int a[][10],int n ,int m)
{	
	int i,j;
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]==m)
				return 1;
		return 0;			
	
}
void xuatvitrigtri(int a[][10],int n,int k)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if( k==a[i][j])
				printf("Hang: %d Cot: %d",i+1,j+1);
}
int thaythegtri(int a[][10],int n,int k,int q)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if( k==a[i][j])
				a[i][j]=q;
	xuatmatran(a,n);
}
int Demgtri(int a[][10],int n,int w)
{
	int i,j, dem=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]==w)
				dem=dem+1;
				
	return dem;
}
int tonglancan(int a[][10],int n,int k)
{
	int i,j,s=0;
for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			s = 0;
			if (a[i][j] == k)
			{
				if (i - 1 >= 0) s += a[i - 1][j];
	         	if (j - 1 >= 0) s += a[i][j - 1];
				if (j + 1 < n) s += a[i][j + 1];
				if (i + 1 < n) s += a[i + 1][j];
				if (j - 1 >= 0 && i - 1 >= 0) s += a[i - 1][j - 1];
				if (i + 1 < n && j + 1 < n) s += a[i + 1][j + 1];
				if (i - 1 >= 0 && j + 1 < n) s += a[i - 1][j + 1];
				if (j - 1 >= 0 && i + 1 < n) s += a[i + 1][j - 1];	
			return s;
			}
		}
}
int HinhXoanOcTang(int a[][10],int n, int b[10])
{
	int z,t,l,h;
	int j,i,k=0;
	for(i=0;i<n;i++)
		{	
			for(j=0;j<n;j++)
			{
				b[k]=a[i][j];
				k++;
			}
		}
	for(z=0;z<k-1;z++)
		for(h=z+1;h<k;h++)
			if(b[z]>b[h])
				{	
					t=b[z];
					b[z]=b[h];
					b[h]=t;
				}
	int tren=0, duoi=n-1, trai=0, phai=n-1;
	int g, vt=0;
	do
	{
		for(g=trai;g<=phai&&vt<k;g++)
			a[tren][g]=b[vt++];
			tren++;
		for(g=tren;g<=duoi&&vt<k;g++)
			a[g][phai]=b[vt++];
			phai--;
		for(g=phai;g>=trai&&vt<k;g--)
			a[duoi][g]=b[vt++];
			duoi--;
		for(g=duoi;g>=tren&&vt<k;g--)
			a[g][trai]=b[vt++];
			trai++;
		
	}while (tren<=duoi&&trai<=phai);
	xuatmatran(a,n);
}
int HinhXoanOcGiam(int a[][10], int n)
{
	int b[10];
		int z,t,l,h;
	int j,i,k=0;
	for(i=0;i<n;i++)
		{	
			for(j=0;j<n;j++)
			{
				b[k]=a[i][j];
				k++;
			}
		}
	for(z=0;z<k-1;z++)
		for(h=z+1;h<k;h++)
			if(b[z]<b[h])
				{	
					t=b[z];
					b[z]=b[h];
					b[h]=t;
				}
	int tren=0, duoi=n-1, trai=0, phai=n-1;
	int g, vt=0;
	do
	{
		for(g=trai;g<=phai&&vt<k;g++)
			a[tren][g]=b[vt++];
			tren++;
		for(g=tren;g<=duoi&&vt<k;g++)
			a[g][phai]=b[vt++];
			phai--;
		for(g=phai;g>=trai&&vt<k;g--)
			a[duoi][g]=b[vt++];
			duoi--;
		for(g=duoi;g>=tren&&vt<k;g--)
			a[g][trai]=b[vt++];
			trai++;
		
	}while (tren<=duoi&&trai<=phai);
	xuatmatran(a,n);
}

