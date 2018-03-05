#include <stdio.h> 
void  fibo ( int ); 
int  main () 
{ 
	int  n ; 
	printf ( "Nhỏ vậy phan tu:" ); 
	scanf ( "%d" ,  &n); 
	fibo ( n ); 
} 
void  fibo ( int  x ) 
{ 
	int  a [ x ],  i ; 
	a [ 0 ]  =  1 ; 
	a [ 1 ]  = 1 ; 
	printf ( "% d% d" ,  a [ 0 ],  a [ 1 ]); 
	for  ( i  =  2 ;  i < x ;  i ++ ) 
	{ 
		a [ i ]  =  a [ i - 1 ]  +  a [ i - 2 ]; 
		printf ( "% d" ,  a [ i ]); 
	} 
}
