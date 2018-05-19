#include <stdio.h>
int  main()
{
	int a[100][100],d,c;
	printf("Nhap dong,cot ma tran vuong dong cot bang nhau: ");
	scanf("%d %d", &d,&c);
	int trai=0,tren=0,phai=c,duoi=d,dem=1,soluong=c*d;
		while(dem<=soluong)
  			{	
   				for(int i=trai;i<phai;i++)
       					a[tren][i]=dem++;
           				tren++;
   				for(int i=tren;i<duoi;i++)
       					a[i][phai-1]=dem++;
           				phai--;
   				for(int i=phai-1;i>=trai;i--)
       					a[duoi-1][i]=dem++;
            			duoi--;
   				for(int i=duoi-1;i>=tren;i--)
     					a[i][trai]=dem++;
        				trai++;
 			}
	for(int i=0;i<d;i++)
  		{
 		for(int j=0;j<c;j++)
       			printf("%d  ",a[i][j]);
       			printf("\n");
		}
}
