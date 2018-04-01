#include <stdio.h>
#include <conio.h>

int main()
{
   char kt,tl;
   fflush(stdin);
   do
   {
      printf("Nhap 1 ky tu trong he thap luc phan '0'...'9' va 'A'...'F':\n");
      scanf("%c",&kt);
   }
   while (kt<48||kt>57&&kt<65||kt>70);

   switch (kt)
   {
   case '0':
      printf("gia tri thap phan tuong ung: 0");
      break;
   case '1':
      printf("gia tri thap phan tuong ung: 1");
      break;
   case '2':
      printf("gia tri thap phan tuong ung: 2");
      break;
   case '3':
      printf("gia tri thap phan tuong ung: 3");
      break;
   case '4':
      printf("gia tri thap phan tuong ung: 4");
      break;
   case '5':
      printf("gia tri thap phan tuong ung: 5");
      break;
   case '6':
      printf("gia tri thap phan tuong ung: 6");
      break;
   case '7':
      printf("gia tri thap phan tuong ung: 7");
      break;
   case '8':
      printf("gia tri thap phan tuong ung: 8");
      break;
   case '9':
      printf("gia tri thap phan tuong ung: 9");
      break;
   case 'A':
      printf("gia tri thap phan tuong ung: 10");
      break;
   case 'B':
      printf("gia tri thap phan tuong ung: 11");
      break;
   case 'C':
      printf("gia tri thap phan tuong ung: 12");
      break;
   case 'D':
      printf("gia tri thap phan tuong ung: 13");
      break;
   case 'E':
      printf("gia tri thap phan tuong ung: 14");
      break;
   case 'F':
      printf("gia tri thap phan tuong ung: 15");
      break;

   }
   getch();
}

