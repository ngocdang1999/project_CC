#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 
	1 Doc chuoi ki tu tu file 
	2 Xuat Chuoi ra man hinh 
	3 Xoa ki tu trang ben phai chuoi
	4 xoa ki tu trang ben trai chuoi
	5 xoa nhuwnng ki tu trang thua trong chuoi 
	6 dem so ky tu k trong chuoi 
	7 Thay the ky tu k thanh ky tu h trong chuoi
	8 Chuyen chuoi sang chu in hoa 
	9 chuyen chuoi sang chu thuong
	10 Hoa ky tu dau cua mmoi tu trong chuoi
	11 Dao nguoc chuoi
	12 Xoa ky tu k trong chuoi 
	13 xoa ky tu tai vi tri v trong chuoi
	14 Chen ki tu q vao vi tri v trong chuoi
	15 Chen ky tu q vao truoc ki tu p trong chuoi */

int DoChuoiFile(char [100],char*);
void XuatChuoiFile(char*,int );
char* XoaKyTuTrangTrai(char*,int);
char* XoaKyTuTrangPhai(char*,int);
char* XoaKyTuTrangGiua(char*,int);
int DemSoKyTu(char*,int,char);
int ThayTheKyTu(char*,int,char);
char* ChuoiKyTuHoa(char*,int);
char* ChuoiKyTuThuong(char*,int);
char* ChuoiHoaKyTuDau(char*,int);
char* ChuoiKyTuDaoNguoc(char*,int);
int XoaKyTu(char*,int,char t[10]);
int XoaKyTuViTri(char*,int,int);
int ChenKyTu(char*,int,char,int);
int ChenKyTuTruocKyTu(char*,int,char,char);

int main(){
	
	char *filename="C:\\Users\\DANGG\\Documents\\dulieu.txt";
	char a[100] ;
	int n = DocChuoiFile(a,filename);
	XuatChuoiFile(a,n);
	///////////////////////////////////
	printf("\n");
	XoaKyTuTrangTrai(a,n);
	///////////////////////////////////////
	printf("\n");
	XoaKyTuTrangPhai(a,n);
	//////////////////////////////////////////////
	printf("\n");
	XoaKyTuTrangGiua(a,n);
	///////////////////////////////////////
	char k;
	printf("\n");
	printf("Nhap vao ki tu k: ");
	scanf("%c",&k);
	DemSoKyTu(a,n,k);
	printf("Gia tri K co trong chuoi:%d",	DemSoKyTu(a,n,k));
	///////////////////////////////////////////////////////////////
	printf("\n");
	ThayTheKyTu(a,n,k);
	////////////////////////////////////////////////////
	printf("\n");
	ChuoiKyTuHoa(a,n);
	////////////////////////////////////////////
	printf("\n");
	ChuoiKyTuThuong(a,n);
	/////////////////////////////////
	printf("\n");
	ChuoiHoaKyTuDau(a,n);
	/////////////////////////////////
	printf("\n");
	ChuoiKyTuDaoNguoc(a,n);
	//////////////////////////////
	printf("\n");
	char t[10];
	printf("Nhap vao ki tu : ");
	scanf("%c",&t);
	XoaKyTu(a,n,t);
}

// Doc Chuoi
int DocChuoiFile(char a[100] ,char *filename)
{
	FILE *f;
	int n,i=0,j;
	f= fopen(filename,"rt");
	while(!feof(f))
		{
		fscanf(f,"%c",&a[i++]);
		}
	fclose(f);		
	return i;		
}
// Xuat Chuoi 
void XuatChuoiFile(char *a , int n )
{
	int i=0;
	for (i=0;i<n;i++)
	{
		printf("%c",*(a+i));
	}
}
char* XoaKyTuTrangTrai(char *a,int n)
{
	int c=0;
	if(a[0]==' ')
	{
		while(a[c]==' ')
		c++;
	int i;
	for(i=0;i<strlen(a);i++)
		a[i]=a[i+c];
	}
XuatChuoiFile(a,n);		
}
char* XoaKyTuTrangPhai(char *a,int n)
{
	int j;
	 int Count = 0;
    if (a[strlen(a)]==' ') 
        for (j = strlen(a); a[j] == ' '; j--)
            Count++;
a[strlen(a) - Count];
XuatChuoiFile(a,n);	
}
char* XoaKyTuTrangGiua(char *a,int n)
{
	int i,j, Count = 0;
    for ( i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ') {
            Count = 0;
            for (j = i + 1; a[j] == ' '; j++)
                Count++;
            i++;
            for (j = i; j < strlen(a); j++)
                a[j] = a[j + Count];
        }
    }
XuatChuoiFile(a,n);   
}
int DemSoKyTu(char *a,int n,char k)
{
	int i=0,dem=0;
	for (i=0;i<strlen(a);i++)
	{
		if(a[i]==k)
		{
			dem++;
		}
	}
	return dem;
}
int ThayTheKyTu(char *a,int n,char k)
{
	int i=0;
	for (i=0;i<strlen(a);i++)
	{
		if(a[i]==k)
		{
			a[i]='g';
		}
	}
	XuatChuoiFile(a,n);
}
char* ChuoiKyTuHoa(char *a,int n)
{
	int i;  
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='A'&&a[i]<'Z')
		a[i]=a[i]+32;
		else
		if(a[i]>='a'&&a[i]<'z')
		a[i]=a[i]-32;	
	}
XuatChuoiFile(a,n);
}
char* ChuoiKyTuThuong(char *a,int n)
{
	int i;  
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='A'&&a[i]<'Z')
		a[i]=a[i]+32;
		else
		if(a[i]>='a'&&a[i]<'z')
		a[i]=a[i]-32;	
	}
XuatChuoiFile(a,n);
}
char* ChuoiHoaKyTuDau(char *a,int n)
{
	int i;
	if(a[0]>='a'&&a[0]<'z')
	a[0]=a[0]-32;
	for(i=1;i<strlen(a);i++)
	{
		if(a[i]==' ')
		if(a[i+1]>='a'&&a[i+1]<'z')
		a[i+1]=a[i+1]-32;	
	}
	XuatChuoiFile(a,n);
}
char* ChuoiKyTuDaoNguoc(char *a,int n)
{	
	int i;
	for(i=strlen(a);i>=0;i--)
		printf("%c",a[i]);
}
int XoaKyTu(char*a,int n,char t[10])
{
	
	int i=0;
	int j=0;
	for (i=0;i<strlen(a);i++)
	{
		if(a[i]==t[j])
		{
			a[i]=a[i+1];
		}
	}
	XuatChuoiFile(a,n);
}
