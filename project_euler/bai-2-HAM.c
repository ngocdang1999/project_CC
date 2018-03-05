#include <stdio.h> 
#include <math.h> 
int  sodao ( int ); 
int  sodoixung ( int ); 
int  sochph ( int ); 
int  songuyento  ( int ); 
int  tongle ( int ); 
int  tongnguyento  ( int ); 
int  tongchph ( int ); 
int  main () 
{ 
	int  n ,  a ;
	printf ( "Nhập số:" );
	scanf( "%d" ,  &n );
	printf ( " \n " );
	a  =  sodao ( n ) ;
	printf ( "Số đảo của%d la %d \n " ,  n ,  a );
	a  =  sodoixung ( n );
	if ( a  ==  1 )  
	{
        printf ( "%d la doi xung \n " ,  n );
    }
	else 
	{
        printf ( "%d khong doi xung \n ",  n );
	}
	a  =  sochph ( n ); 
	if  ( a  ==  0  ) printf ("%d là so chinh phuong \n " , n );
			else  printf ("%d không là so chinh phuong \n " , n );
	a  =  songuyento ( n ); 
		if  ( a  ==  1 )  printf ("%d khong phai so nguyen to \n " ,n );
			else  printf ( "%d la so nguyen to \n " ,n); 
	a  =  tongle ( n ); 
	printf ( "Tong các chữ số lẻ của %d là %d \n " , n , a ) ;
	a  =  tongnguyento ( n ); 
	printf ( "Tong cac so nguyen to %d là %d\n " , n , a );
	a  =  tongchph ( n ); 
	printf ("Tong cac so chinh phuong %d là %d\n " , n , a ); 
} 
int  sodao ( int  x ) 
{ 
	int  a  =  0 ,  b ,  c ; 
	b  =  x ; 
	while ( b ) 
	{ 
        c  =  b  %  10 ; 
        a  = a * 10  +  c ; 
        b  /=  10 ; 
    } 
    return  a ;
} 
int  sodoixung ( int  x ) 
{ 
	int  h  =  sodao ( x ),  k ; 
	if ( h  ==  x )  k  =  1 ; 
		else  k  =  0 ; 
	return  k ; 
} 
int  sochph ( int  x ) 
{ 
	int  i  =  sqrt ( x ),  k  =  0 ; 
	if  ( x  == i * i )  k  =  0 ;  else  k  =  1 ; 
	return  k ; 
} 
int  songuyento  ( int  x ) 
{ 
	int  i ,  k  =  0 ; 
	if  ( x == 1 )  k  =  1 ; 
	else 
	{ 
		for  ( int i=  2 ;i<=(sqrt(x));  i++)
		{
			if  ( x  %  i  ==  0 ) 
				{ 
					k  =  1 ; 
					break ; 
				
				}
		}		 

	}
	return  k ;  
} 
int  tongle ( int  x ) 
{ 
	int  a  =  0 ,  c ; 
	while  ( x ) 
	{ 
        c  =  x  %  10 ; 
        if  ( c % 2  ==  1 )  a +=  c ; 
        x/=  10 ; 
    } 
    return  a ; 
} 
int  tongnguyento ( int  x ) 
{ 
	int  s  =  0 ,  c ,  k ; 
	while  ( x ) 
	{ 
        c  =  x  %  10 ; 
        k  =  songuyento ( c ); 
        if  ( k  ==  0 )  s  +=  c ; 
        x /=  10 ; 
	} 	
	return s ; 
} 
int  tongchph ( int  x ) 
{ 
	int  s  =  0 ,  c ,  k ; 
	while  ( x ) 
	{ 
        c  =  x  %  10 ; 
        k  =  sochph (c); 
        if  ( k  ==  0 )  s +=  c ; 
        x /=  10 ; 
	} 	
	return  s ; 
}
