#include<stdio.h>
int main(){
        int n;
        printf("Ban hay nhap gia tri cho n : \n");
        scanf("%d",&n);
        int i,j;
        for (i = n-1; i>=0 ; i--){
                for (j = 0; j< n ;j++)
                       if(j >= i) printf(" * ");
                       else printf("   ");
                printf("\n\n");
        }
}
