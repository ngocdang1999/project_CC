#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void Nhapngaunhien(int [], int);
void Xuatday(int [], int);
int Kiemtrasonguyento(int);
int Demsonguyento(int [], int);
long Tongsonguyento(int [], int);
int SogiatrilonhonK(int [], int, int);
int XoaphantuvitriJ(int [], int, int);
int XoagiatriK(int [], int, int);
int ChengiatriK(int [], int, int, int);
int KiemtragiatriK(int [], int, int);
int Docdaysotufile(int [], char []);

int main(int argc, char *argv[]){
	int a[20];
	int n, d, j, i;
	char st[] = "D:\\Dulieu.txt";
	//printf("Nhap so phan tu: "); scanf("%d", &n);
	//printf("\n");
	//Nhapngaunhien(a, n);
	//printf("Mang ngau nhien duoc tao ra la: ");
	n = Docdaysotufile(a, st);
	printf("Mang co trong file la: "); Xuatday(a, n);
	///////////////////////////////////
	for(i = 0; i < n; i ++){
		d = Kiemtrasonguyento(a[i]);
		if(d==0) printf("%d khong phai so nguyen to.\n", a[i]);
			else printf("%d la so nguyen to.\n", a[i]);
	}
	printf("\n");
	//////////////////////////////////
	d = Demsonguyento(a, n);
	printf("Co %d so nguyen to trong mang.\n\n", d);
	/////////////////////////////////
	int s = Tongsonguyento(a, n);
	printf("Tong cac so nguyen to trong mang a la %d\n\n", s);
	/////////////////////////////////
	int k;
	printf("Nhap gia tri can so sanh: "); scanf("%d", &k);
	/////////////////////////////////
	d = SogiatrilonhonK(a, n, k);
	printf("Co %d so lon hon %d\n\n", d, k);
	/////////////////////////////////
	printf("Nhap vi tri ma ban muon xoa: "); scanf("%d", &j);
	/////////////////////////////////
	d = XoaphantuvitriJ(a, n, j);
	while(d == 0){
		printf("Khong xoa duoc do vi tri j nam ngoai mang.\n\n");
		printf("Nhap lai vi tri co the xoa duoc: ");
		scanf("%d", &j);
		d = XoaphantuvitriJ(a, n, j);
	}
	printf("Mang sau khi xoa la: "); Xuatday(a, n-1);
	/////////////////////////////////
	int c;
	printf("Nhap gia tri ma ban muon xoa: "); scanf("%d", &c);
	int e = XoagiatriK(a, n, c);
	printf("Da xoa %d gia tri.\n\n", e);
	printf("Mang sau khi xoa la: "); Xuatday(a, n-1-e);
	////////////////////////////////
	printf("Nhap vi tri ban muon chen vao: "); scanf("%d", &j);
	printf("Nhap gia tri ma ban muon chen: "); scanf("%d", &k);
	d = ChengiatriK(a, n, k, j);
	while (d == 0){
		printf("Khong chen duoc do vi tri j nam ngoai mang.\n\n");
		printf("Nhap lai vi tri co the chen duoc: ");
		scanf("%d", &j);
		d = ChengiatriK(a, n, k, j);
	}
	printf("Mang sau khi chen la: "); Xuatday(a, n-e);
	/////////////////////////////
	printf("Nhap gia tri ma ban muon kiem tra: "); scanf("%d", &k);
	d = KiemtragiatriK(a, n, k);
	if(d==0) printf("%d khong ton tai trong mang.\n", k);
		else printf("%d ton tai trong mang", k);
}
/*Khoi tao mang a gom n phan tu co gia tri ngau nhien
*/
void Nhapngaunhien(int a[], int n){
	srand(time(NULL));
	int i;
	for(i = 0; i < n; i++)
		a[i] = rand()%99 + 1;
}
/*Xuat day a gom n phan tu ngau nhien
*/
void Xuatday(int a[], int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n\n");
}
/*Kiem tra so co phai nguyen to hay khong
*/
int Kiemtrasonguyento(int a){
	int i;
	if(a == 1) return 0;
	for(i = 2; i <= sqrt(a); i++)
		if (a%i == 0) return 0;
	return 1;
}
/*Dem so nguyen to trong mang a gom n phan tu
*/
int Demsonguyento(int a[], int n){
	int i, d = 0;
	for(i = 0; i < n; i++){
		int k = Kiemtrasonguyento(a[i]);
		if(k == 1) d+=1;
	}
	return d;
}
/*Tinh tong cac so nguyen to trong mang a gom n phan tu
*/
long Tongsonguyento(int a[], int n){
	long s = 0;
	int i;
	for(i = 0; i < n; i++){
		int k = Kiemtrasonguyento(a[i]);
		if(k == 1) s+= a[i];
	}
	return s;
}
/*Tim so gia tri lon hon k trong mang a gom n phan tu
*/
int SogiatrilonhonK(int a[], int n, int k){
	int d = 0, i;
	for(i = 0; i < n; i++){
		if(a[i] > k) d+=1;
	}
	return d;
}
/*Xoa phan tu tai vi tri thu j cua mang a gom n phan tu
*/
int XoaphantuvitriJ(int a[], int n, int j){
	int i;
	if(j > n || j < 1) return 0;
	for(i = j - 1; i < n; i++)
		a[i] = a[i+1];
	return 1;
}
/*Xoa cac phan tu co gia tri bang k cua mang a va tra lai so phan tu da xoa
*/
int XoagiatriK(int a[], int n, int k){
	int i, j, d = 0;
	for(i = 0; i < n; i++)
		if(a[i] == k){
			n -= XoaphantuvitriJ(a, n, i+1);
			i--;
			d++;
		}
	return d;
}
/*Chen phan tu k vao vi tri thu j trong mang a
*/
int ChengiatriK(int a[], int n, int k, int j){
	if(j > n || j < 1) return 0;
	int i;
	for(i = n; i > j - 1; i--)
		a[i] = a[i-1];
	a[j - 1] = k;
	return 1;
}
int KiemtragiatriK(int a[], int n, int k){
	int i;
	for (i = 0; i < n; i++)
		if(a[i] == k) return 1;
	return 0;
}
int Docdaysotufile(int a[], char st[]){
	FILE *f;
	int i = 0;
	f = fopen(st, "rt");
	while(!feof(f)) fscanf(f, "%d", &a[i++]);
	fclose(f);
	return i;
}
