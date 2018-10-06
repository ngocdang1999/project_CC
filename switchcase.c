#include<stdio.h>
int main() {
	int a,b;
	char pheptoan;
	printf("nhap so nguyen 1: "); 
	scanf("%d",&a);
	printf("nhap vao phep toan: + - * / :"); 
	scanf("%s",&pheptoan);
	printf("nhap so nguyen 2: ");
	scanf("%d",&b);
		switch (pheptoan) 
		{
		case '+' : printf("ket qua %d + %d = %d", a, b, a+b);break;
		case '-' : printf("ket qua %d - %d = %d:", a, b, a - b);break;
		case '*' : printf("ket qua %d * %d = %d:", a, b, a*b);break;
		case '/' : printf("ket qua %d / %d = %d:", a, b, a / b);break;
		}
	

	}
