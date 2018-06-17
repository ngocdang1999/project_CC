#include<stdio.h>
float TBM(float,float,float,float);
float TBTM(float,float,float,float);
int main()
{
	float DM,DN,DKT,DCK;
	printf("Nhap diem thanh phan mieng, 15p, 1 tiet, thi:");
	scanf("%f  %f  %f  %f", &DM,&DN,&DKT,&DCK);
	TBM(DM,DN,DKT,DCK);
	TBTM(DM,DN,DKT,DCK);
	printf("Diem trung binh mon hc cua hc sinh la:%f ",TBTM(DM,DN,DKT,DCK));
}
float TBM(float DM,float DN,float DKT,float DCK)
{
	float s=0;
	s=(DM+DN+DKT*2+DCK*3)/7;
	return s;
}
float TBTM(float DM,float DN,float DKT,float DCK)
{
	float g;
	g=TBM(DM,DN,DKT,DCK);
	return g;
}
