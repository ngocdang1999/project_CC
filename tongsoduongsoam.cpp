#include<stdio.h>
int main()
{
	int a[200];
	int i,n;
	printf("Nhap so luong so sanh:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		printf("Nhap day so can so sanh %d:",i+1);
		scanf("%d",&a[i]);
		}
	{
		int b;
		int demtongduong=0, demtongam=0;
		float trungbinhtongduong=0, trungbinhtongam=0;
		for(b=0;b<n;b++)
		{
			if(a[b]<0)
			{
				demtongam++;
				trungbinhtongam=trungbinhtongam+a[b];
			}
			else
			{
				demtongduong++;
				trungbinhtongduong=trungbinhtongduong+a[b];
			}
		}
		float tongam=0, tongduong=0;
		tongam=	trungbinhtongam/2;
		tongduong=trungbinhtongduong/2;
	printf("\nSo duong co trong day la: %d",demtongduong);
	printf("\nSo am co trong day la: %d",demtongam);
	printf("\nTrung binh cong so duong trong day: %.3f",tongduong);
	printf("\nTrung binh cong so am trong day: %.3f",tongam);	
	}
}
