#include <stdio.h>

int main (void)
{
  int n, i, j;
  float e = 0.0, s1 = 1.0;

  printf ("Nhap vao so can tinh : ");
  scanf ("%d", &n);

for( i =1; i<= n ; i++)
{
    s1*=i;
    e = e + (1.0/ s1);
}

  printf ("Ket qua : %f", e);
return 0;
}
