#include <stdio.h>
#include <stdlib.h>
 
void Hex(int n) 
{
    if (n < 16)  
    {
        printf("%c","0123456789ABCDEF"[n]); // hien thi ky tu thu n trong chuoi
        return;
    } 
    else Hex(n / 16);
    printf("%c","0123456789ABCDEF"[n % 16]);
}
 
int main() {
    int n;
    printf("So thap phan: ");
    scanf("%d", &n);
    printf("So thap luc phan:");
    Hex(n);
    return 0;
}
