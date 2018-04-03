#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
	int soNgauNhien1,soNgauNhien2,soNgauNhien3,soNgauNhien4;
	int so1,so2,so3,so4;
	int doan1,doan2,doan3,doan4;
	int choitiep=1;
	int a,b,k;
	int vtDung = 0, vtSai = 0;
	int soLanDoan = 0;
	int kt = 0;
while (choitiep!=0)
{
	printf("================================================================================================\n");
	printf("== Tro choi may phat sinh 4 so ngau nhien tu 1 den 6. v nguoi choi phai doan 4 so trong 6 lan.==\n");
	printf("== Sau moi lan nguoi choi doan,may se bao cho biet tong so vi tri dung va so tri sai.         ==\n");
	printf("================================================================================================\n");
	srand(time(NULL));
	soNgauNhien1 = rand()%6 +1;
	soNgauNhien2 = rand()%6 +1;
	soNgauNhien3 = rand()%6 +1;
	soNgauNhien4 = rand()%6 +1;

	for(soLanDoan=0;soLanDoan<6; )
	{
		so1 = soNgauNhien1; so2 = soNgauNhien2; so3 = soNgauNhien3; so4 = soNgauNhien4;
		soLanDoan++;
		vtDung = 0;
		vtSai = 0;
		printf("Doan lan thu %d \n", soLanDoan);
		printf("###############\n");
		printf("So thu nhat: "); scanf("%d",&doan1);
		printf("So thu hai: "); scanf("%d",&doan2);
		printf("So thu ba: "); scanf("%d",&doan3);
		printf("So thu bon: "); scanf("%d",&doan4);

		if (so1 == doan1)
		{
			vtDung+= 1;
			doan1 = 0;
			so1 = 0;
		}

		if (so2 == doan2)
		{
			vtDung+= 1;
			doan2 = 0;
			so2 = 0;
		}

		if (so3 == doan3)
		{
			vtDung+= 1;
			doan3 = 0;
			so3 = 0;
		}

		if (so4 == doan4)
		{
			vtDung+= 1;
			doan4 = 0;
			so4 = 0;
		}

		if (vtDung == 4)
		{
			for(k=0;k<vtDung;k++)
			{
			printf("* ");
			}
			printf("\n");
			printf("%s\n", "Doan dung");
			kt = 1;
			break;
		}

		if (doan1 != 0)
		{
			if (doan1 == so2) 
			{
				vtSai+= 1;
				so2 = 0;
			} 	
			else
				if (doan1 == so3) 
				{
					vtSai+= 1;
					so3 = 0;
				} 
			else
				if (doan1 == so4) 
				{
					vtSai+= 1;
					so4 = 0;
				}
		}

		if (doan2 != 0)
		{
			if (doan2 == so1) 
			{
				vtSai+= 1;
				so1 = 0;
			} 	
			else
				if (doan2 == so3) 
				{
					vtSai+= 1;
					so3 = 0;
				} 
			else
				if (doan2 == so4) 
				{
					vtSai+= 1;
					so4 = 0;
				}	
		}

		if (doan3 != 0)
		{
			if (doan3 == so1) 
			{
				vtSai+= 1;
				so1 = 0;
			}	
			else
				if (doan3 == so2) 
				{
					vtSai+= 1;
					so2 = 0;
				} 
			else
				if (doan3 == so4) 
				{
					vtSai+= 1;
					so4 = 0;
				}
		}

		if (doan4 != 0)
		{
			if (doan4 == so1) 
			{
				vtSai+= 1;
				so1 = 0;
			} 
			else
				if (doan4 == so2) 
				{
					vtSai+= 1;
					so2 = 0;
				}
			else
				if (doan4 == so3) 
				{
					vtSai+= 1;
					so3 = 0;
				}
		}
		for(a=0;a<vtDung;a++)
		{
			printf("* ");
		}
		for(b=0;b<vtSai;b++)
		{
			printf("0 ");
		}
		printf("\n");
		printf("Vi tri dung %d\n", vtDung);
		printf("Vi tri sai %d\n", vtSai);
	}

	if (kt == 0) printf("Doan sai ca 6 lan\n\n");
	printf("So may phat sinh ngau nhien:  ");
	printf("%d   %d   %d   %d\n", soNgauNhien1,soNgauNhien2,soNgauNhien3,soNgauNhien4);
	printf("*********************************************\n");
	printf("***  Ban co muon choi tiep nua khong?  ******\n");
	printf("Moi nhap so khac 0 de choi tiep, nhap 0 ngung :  ");
	scanf("%d",&choitiep);
	printf("\n");
}
}
