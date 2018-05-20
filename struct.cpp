#include"stdio.h"
#include"string.h"
struct sinhvien //Gan sinh vien la kieu struct gom cac thong tin: mssv, ho va ten, tuoi sinh vien, diem.
{
	char masv[20];
	char hoten[20];
	int tuoisv;
	float toan, ly, hoa, av;
};

void nhap(struct sinhvien [], int );
void xuat(struct sinhvien [], int );

sinhvien sv[10]; //Khai bao bien sv kieu struct gom 10 sinh vien
//Co the khai bao bien sv nhu sau: struct sinhvien sv[10]

int main()
{
	int n;
	printf("\nNhap so sinh vien: ");
	scanf("%d", &n);
	fflush(stdin);
	nhap(sv, n);
	xuat(sv, n);
	printf("\n");
	return 0;
}
void nhap(sinhvien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nThong tin sinh vien thu %d ", i + 1);
		printf("\nNhap ma sinh vien: ");
		gets(sv[i].masv);//Dung gets de nhap chuoi ky tu
		printf("\nNhap ten sinh vien: ");
		gets(sv[i].hoten); //Dung gets de nhap ten, chuoi co khoang trong
		
		printf("\nNhap tuoi sinh vien: ");
		scanf("%d", &sv[i].tuoisv);
		fflush(stdin);
		
		printf("\nNhap diem sinh vien: ");
		printf("\nToan: ");
		scanf("%f", &sv[i].toan);
		fflush(stdin);//Sau cau lenh scanf() phai dung fflush(stdin) de xoa ky tu enter
		
		printf("\nLy: ");
		scanf("%f", &sv[i].ly);
		fflush(stdin);
		
		printf("\nHoa: ");
		scanf("%f", &sv[i].hoa);
		fflush(stdin);
		
		printf("\nAnh van: ");
		scanf("%f", &sv[i].av);
		fflush(stdin);
	}
}
void xuat(sinhvien sv[], int n)
{
	printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s\n", "MSSV", "Ten", "Tuoi", "Diem Toan", "Diem Ly", "Diem Hoa", "Diem AV");
	for (int i = 0; i < n; i++)
		printf("%-10s %-20s %-10d %-10f %-10f %-10f %-10f\n", sv[i].masv, sv[i].hoten, sv[i].tuoisv, sv[i].toan, sv[i].ly, sv[i].hoa, sv[i].av);
}
