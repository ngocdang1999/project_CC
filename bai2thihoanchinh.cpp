#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int Nhap();
int main()
{
	int a[4], i, j, b[4], d, choitiep=1, e, f;
	time_t t;
while (choitiep!=0)
{
	printf("Tro choi may phat sinh 4 so ngau nhien tu 1 den 6. v nguoi choi phai doan 4 so trong 6 lan.\n");
	printf("Sau moi lan nguoi choi doan,may se bao cho biet tong so vi tri dung va so tri sai.\n");

	srand((unsigned) time(&t));
	a[0] = rand()%5 + 1;
	a[1] = rand()%5 + 1;
	a[2] = rand()%5 + 1;
	a[3] = rand()%5 + 1;
	for (d = 0; d < 6; d++) {
	int i,j,demdung=0,demsai=0; 
		printf("                                                                                               =\n");
		printf("                                                                                               =\n");
		printf("============================================================================================\n");
		printf("                                                                                               =\n");
		printf("                                                                                               =\n");
		printf("Lan thu %d\n", d+1);
		printf("\n");
		for (j = 0; j < 4; j++) {
				printf("Moi ban doan so thu %d: ", j+1);
				scanf("%d", &b[j]);
				fflush(stdin);
			}
	 for (i=0;i<4;i++)
    {
        if (a[i]==b[i])
        {
            demdung++;
            continue;
        }
        for (j=0;j<4;j++)
            if (a[i]==b[j])
            {
                demsai++;
                break;
            }
	}
		
		printf("\n");
		printf("Ket qua la: \n");
		for (e=0 ; e<demdung ; e++)
		{
			printf("*");
		}
		for (f=0 ; f<demsai ; f++)
		{
			printf("0");
		}
		printf("\n");
		printf("\n");
		printf("%d so dung vi tri\n", demdung);
		printf("%d so sai vi tri\n\n", demsai);
	}
	printf("4 so ma may phat sinh la: ");
	for (j = 0; j <= 3; j++) printf("%5d", a[j]);
	printf("\n");
	printf("\n");
	printf(" Ban co muon choi tiep nua khong ? \n");
	printf("Moi nhap so khac 0 de choi tiep nhap 0 ngung :  ");
	scanf("%d",&choitiep);
	printf("\n");
	
	}
}
