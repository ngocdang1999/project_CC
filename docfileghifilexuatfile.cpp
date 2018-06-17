#include<stdio.h>
int Docfile(int [][10], char[] );
int Ghifile(int a[][10], char[], int);
int Xuat(int [][10],int);
int Nhapmang(int [][10], int);
int Xuatmatrannhap(int [][10], int);
int kiemtrasogiong(int [][10], int [][10], int, int);
int main()
{
	int m;
	int a[10][10];
	int b[10][10];
	char str[]="C:\\Users\\DANG\\Documents\\dulieu.txt";
	int n=Docfile(a,str);
	char str2[]="C:\\Users\\DANG\\Documents\\ketqua.txt";
	Ghifile(a,str2,n);
	printf("Mang la: \n");
	Xuat(a,n);
	printf("Nhap vao ma tran vuong cap: ");
	scanf("%d",&m);
	Nhapmang(b,m);
	printf("Mang nhap vao la: \n");
	Xuatmatrannhap(b,m);
	printf("Gia tri giong cua 2 mang: ");
	kiemtrasogiong(a,b,n,m);

}
int Docfile(int a[10][10], char str[])
{
	FILE *f;
	int n,i,j;
	f=fopen(str,"rt");
	fscanf(f,"%d",&n);
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				fscanf(f,"%d",&a[i][j]);
		}
	fclose(f);
	return(n);
}
int Ghifile(int a[10][10], char str2[], int n)
{
	FILE *p;
	int i,j;
	p=fopen(str2,"wt");
	fprintf(p,"Mang ghi la: %d",n);
	fprintf(p,"\n");
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				fprintf(p,"%d ",a[i][j]);
		fprintf(p,"\n");
		
}
	fclose(p);
}
int Xuat(int a[10][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%d ",a[i][j]);
				printf("\n");
		}
	
}
int Nhapmang(int b[10][10], int m)
{
	int c,d;
	for(c=0;c<m;c++)
		{
			for(d=0;d<m;d++)
			{
				printf("NHAP VAO PHAN TU HANG %d COT %d: ",c+1,d+1);
				scanf("%d",&b[c][d]);
			}
		}
}
int Xuatmatrannhap(int b[10][10], int m)
{
	int c,d;
	for(c=0;c<m;c++)
		{
			for(d=0;d<m;d++)
			{
				printf("%d ",b[c][d]);
			}
		printf("\n");
		}
}
int kiemtrasogiong(int a[10][10], int b[10][10], int n, int m)
{
	int i,j,t;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				int c,d;
				for(c=0;c<m;c++)
				{
					for(d=0;d<m;d++)
						{
							if(a[i][j]==b[c][d]){
								t=a[i][j];
								a[i][j]=-1;
								printf("%d  ",t);
							}
						}
				}
		}
	}
}
