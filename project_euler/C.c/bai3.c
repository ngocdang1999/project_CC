#include <stdio.h>
int main()
{
    int h=0, i=1, s=0;
    while (h<93)
    {   
       
        h=7*i;
        i++;
        s=s+h;
        if (h>100)
        {
        break;
        }

           printf ("Tổng:%d \n",s);
    }
printf ( "Tổng lớn:%d \n",s);
}
