#include <stdio.h>
 
int main()
{
    int th, nm, songay;
   
    printf("Nhap thang, nam: ");
    scanf("%d%d", &th, &nm);
   
    if (th>=1 && th<=12)
    {
        switch (th)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: songay = 31; break;
        case 4:
        case 6:
        case 9:
        case 11: songay = 30; break;
        case 2:
            if (nm % 400 == 0 || (nm % 4 == 0 && nm % 100 != 0))    // nam nhuan
                songay = 29;
            else
                songay = 28;
        }
 
        printf("=> Thang %d/%d co %d ngay\n", th, nm, songay);
    }
    else
        printf("=> Thang khong hop le!\n");
}
