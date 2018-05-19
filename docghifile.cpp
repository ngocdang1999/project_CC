#include<stdio.h>
int DocMaTran(int a[][10], char[]);
void xuatmatran(int a[][10],int );
void GhiMaTran(int a[][10], char[],int);

int main()
{
	int a[10][10];
	char str[]="C:\\Users\\DANG\\Documents\\file1.txt";
	int n;
	n=DocMaTran(a,str);
	xuatmatran(a,n);
	char str2[]="C:\\Users\\DANG\\Documents\\Ketqua1.txt";
	GhiMaTran(a,str2,n);
	
}
int DocMaTran(int a[][10], char str[])
{
	FILE *f;
	int n;
	f=fopen(str,"rt");
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
void GhiMaTran(int a[][10], char str2[],int n)
{
	FILE *p;
	p=fopen(str2,"wt");
	int i,j;
	fprintf(p,"Ket qua doc ma tran A(%d x %d):\n",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			fprintf(p,"%d " ,a[i][j]);
		fprintf(p,"\n");
	}
	fclose(p);
}
