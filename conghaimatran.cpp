#include <stdio.h>
#include <string.h>
#include <math.h>

main()
{
	FILE *f, *p;
	int n, m, i, j;
	char st[] = "C:\\Users\\DANG\\Documents\\Chuoi.txt";
	char sb[50];
	f = fopen(st, "rt");
	p = fopen(st, "at");
	fscanf(f, "%d %d", &n, &m);
	int a[n][m], b[n][m], c[n][m];
	///////////////////////////////
	for(i = 0; i < 11; i++) sb[i] = fgetc(f);
	fflush(stdin);
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			fscanf(f, "%d", &a[i][j]);
	fflush(stdin);
	///////////////////////////
	for(i = 0; i < 11; i++) sb[i] = fgetc(f);
	fflush(stdin);
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			fscanf(f, "%d", &b[i][j]);
	fflush(stdin);
	////////////////////////////
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			c[i][j] = a[i][j] + b[i][j];
	////////////////////////////////
	fprintf(p, "\nMa tran C\n");
	for(i = 0; i < n; i++)
	{	
		for(j = 0; j < m; j++) fprintf(p,"%-5d", c[i][j]);
		fprintf(p, "\n");
	}
	fclose(f); fclose(p);
	
}
