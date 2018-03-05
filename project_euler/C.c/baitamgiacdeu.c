#include <stdio.h>

int main() {
   int n,i,j,k;
   printf("Nhap chieu cao n:");
   scanf("%d",&n);
   printf("Ve tam giac sao deu:\n\n");
   for(i = 1; i <= n; i++) {
      for(j = n; j >i; j--)
         printf("   ");

      for(k = 1; k <= 2*i-1; k++)
         printf(" * ");

      printf("\n");
   }
}
