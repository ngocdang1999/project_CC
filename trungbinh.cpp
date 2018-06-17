#include<stdio.h>
int doc(int [10],char[]);
int tinh(int [10],int);
int main()
{
	char str[]="C:\\Users\\DANG\\Documents\\test.txt";
	int a[10];
	int n=doc(a,str);
	tinh(a,n);
}
int doc(int a[10],char str[])	
{
	int n,i;
	FILE *f;
	f=fopen(str,"rt");
		fscanf(f,"%d",&n);
	for(i=0;i<n;i++)
		fscanf(f,"%d",&a[i]);
fclose(f);
return(n);
}
int tinh(int a[10],int n)
{
	int dem=0,i,s=0,s2=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		if(a[i]>0) dem+=1;
	}
	s2=s/n;
	printf("tong trug binh: %d",s2);
}
