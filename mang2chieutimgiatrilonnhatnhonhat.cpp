#include <stdio.h>
int main()
{
    int Arr[10][10];
    int dong, cot, i, j, min, max,a;
   
    printf(" Nhap so dong:");
    scanf(" %d", &dong);
    printf(" Nhap so cot:");
    scanf(" %d", &cot);
    // Nhap mang
    for ( i = 0; i < dong; i++)
        for( j = 0; j < cot; j++)
        {
            printf(" Nhap phan tu thu[%d][%d] : ", i,j);
            scanf(" %d", &Arr[i][j]);
        }
       
    // Xuat mang
    printf(" \n Mang vua nhap la");
    for ( i = 0; i < dong; i++)
    {
        printf("\n\n");
        for( j = 0; j < cot; j++)
        printf(" %3d", Arr[i][j]);
    }
    printf(" \n");
    // Tim phan tu nho nhat va lon nhat
    min = Arr[0][0];
    max = Arr[0][0];
    for (a = 0; a < dong; a++) 
    {
        for (int b = 0; b < cot; ++b)
        {
            if (Arr[a][b] > max)
                max = Arr[a][b];
            if (Arr[a][b] < min)
                min = Arr[a][b];
        }  
    }
 
    // In ra phan tu lon nhat va nho nhat
    printf("Phan tu lon nhat : %d\n", max);
    printf("Phan tu nho nhat : %d\n", min);
}
