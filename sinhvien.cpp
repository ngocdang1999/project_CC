#include<stdio.h>
#include<conio.h>
void Tao();
void Sua();
void In();
typedef struct
{
	char hoten[40];
	float diem;
} sinh_vien;
long size=sizeof(sinh_vien);
FILE *fp;
int n=0;
sinh_vien sv;
char chon;
int main()
{
	do
	{
		printf("1.tao tep: \n");
		printf("2.sua tep: \n");
		printf("3.in tep: \n");
		chon=getch();
		switch (chon)
		{
			 case '1': Tao(); break;
			 case '2': Sua(); break;
			 case '3': In(); break;
		}
	}while(chon!='4');
	getch();
}
void Tao()
{
	fp=fopen("C:\\Users\\DANG\\Documents\\danhsach.txt","wb");
	do
	{
		printf("\nNhap ten sinh vien thu %d",++n);
		printf("Nhap ho ten: ");
		fflush(stdin);
		gets(sv.hoten);
		printf("\nDiem trung binh: ");
		scanf("%f",&sv.diem);
		fwrite(&sv, size, 1 , fp);
		printf("Ban co mun nhap nua khong\n");
		fflush(stdin);
		chon=getchar();
	}while (chon !='k');
	fclose(fp);
}
void Sua()
{
	int i;
	fp=fopen("C:\\Users\\DANG\\Documents\\danhsach.txt","r+b");
	fseek(fp,0,SEEK_END);
	n= ftell(fp)/size;
	do
	{
		printf("Sua sinh vien thu:");
		scanf("%d",&i);
		fseek(fp,(i-1)*size,SEEK_SET);
		fread(&sv,size,1,fp);
		printf("\nHo tem sinh vien hien tai %s: ",sv.hoten);
		printf("\nDiem trung binh: %6.2f",sv.diem);
		printf("\nNhap diem trun moi:");
		scanf("%f",&sv.diem);
		fseek(fp,-size,SEEK_CUR);
		fwrite(&sv,size,1,fp);
		printf("\nCo mun sua nua khong:");
		fflush(stdin);
		chon=getchar();
	}while(chon !='k');
	fclose(fp);
	printf("\nDa sua xong:\n");
	getch();
		
	}

void In()
{
	int i=0;
	fp=fopen("C:\\Users\\DANG\\Documents\\danhsach.txt","rb");
	printf("\nDanh sach sinh vien:\n");
			printf("\nSTT                        Ho ten                                                     Diem trung binh\n");
	while(fread(&sv,size,1,fp)>0)
			printf("\n%d                		 %s                              	         			%6.2f",i++,sv.hoten,sv.diem);
	fclose(fp);
	getch();
}
