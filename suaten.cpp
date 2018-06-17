#include <string.h>
#include <stdio.h>

main()
{
	char s[50], b[50];
	printf("Nhap cai ten dai dong vao day: "); gets(s);
		int n = strlen(s), j = 0;
	
	for(int i = 0; i < n; i++)
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			b[j] = s[i];
			j++;
		}
	for(j = strlen(b); j > 0; j--)
		if(b[j] >= 'A' && b[j] <= 'Z') break;
	for(int i = j; i < strlen(b); i++)
		printf("%c", b[i]);
}
