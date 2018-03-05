#include<stdio.h>
int main(){
	int n;
	printf("Ban hay nhap gia tri cho n : \n");
	scanf("%d",&n);
	int i,j,k;
	for (i = n; i >=1 ; i --){
		for (j = 1; j<= n -i;j++){
			printf("");
		}
		for ( k = 1; k <= i;k ++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
