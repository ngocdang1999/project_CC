#include <stdio.h>
#include <string.h>
 
struct Books
{
   char  tieude[50];
   char  tacgia[50];
   char  chude[100];
   int   id;
};
 
int main( )
{
   struct Books Book1;        /* Khai bao Book1 la cua kieu Book */
   struct Books Book2;        /* Khai bao Book2 la cua kieu Book */
 
   /* thong tin chi tiet quyen sach thu nhat */
   strcpy( Book1.tieude, "Lap trinh C");
   strcpy( Book1.tacgia, "Pham Van At"); 
   strcpy( Book1.chude, "Ngon ngu lap trinh C");
   Book1.id = 1234567;

   /* thong tin chi tiet quyen sach thu hai */
   strcpy( Book2.tieude, "Toi thay hoa vang tren co xanh");
   strcpy( Book2.tacgia, "Nguyen Nhat Anh");
   strcpy( Book2.chude, "Van hoc");
   Book2.id = 6677028;
 
   /* hien thi thong tin Book1 */
   printf( "Tieu de cua Book1 la                 ");
   printf( "Tac gia cua Book1 la   ");
   printf( "Chu de cua Book1 la    ");
   printf( "ID cua Book1 la");
   printf("\n");

   /*////////////////////*/

   printf( "%s                 ", Book1.tieude);
   printf( "%s                 ", Book1.tacgia);
   printf( "%s          ", Book1.chude);
   printf( "%d", Book1.id);
   printf("\n");

   /* hien thi thong tin Book2 */
   printf( "%s        ", Book2.tieude);
   printf( "%s        ", Book2.tacgia);
   printf( "%s      ", Book2.chude);
   printf("%d", Book2.id);

   return 0;
}









#include <stdio.h>

int Docmatran(int [][10], char []);
void Ghimatran(int, int [][10], char []);
main()
{
	int a[10][10];
	int n;
	char st[] = "D:\\Dulieu.txt";
	n = Docmatran(a, st);
	char st2[] = "D:\\Ketqua.txt";
	Ghimatran(n, a, st2);
}
int Docmatran(int a[][10], char st[])
{
	FILE *f;
	int n;
	f = fopen(st, "rt");
	fscanf(f, "%d", &n);
	int i, j;
	for (i=0; i<n; i++)
		for(j=0; j<n; j++) fscanf(f, "%d", &a[i][j]);
	fclose(f);
	return n;
}
void Ghimatran(int n, int a[][10], char st[])
{
	FILE *p;
	p = fopen(st, "wt");
	int i, j;
	fprintf(p, "Ket qua doc ma tran A(%d x %d): \n", n, n);
	for (i=0; i<n; i++){
		for(j=0; j<n; j++)
			fprintf(p, "%d	", a[i][j]);
		fprintf(p, "\n");
	}
	fclose(p);
}