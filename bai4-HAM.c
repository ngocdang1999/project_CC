# include <stdio.h> 
int  ucln ( int ,  int ); 
int  main () 
{ 
	int  x ,  y ,  k ; 
	printf ( "Nhap hai so:" ); 
	scanf ( "%d%d" , &x , &y ); 
	k  =  ucln ( x , y ); 
	printf ( "Uoc chung lon cua% d va% d la% d" ,  x ,  y ,  k ); 
} 
int ucln ( int  x ,  int  y ) 
{ 
	int  s ; 
	while  ( x != y ) 
	{ 
		if  ( x  >  y )  x  =  x  -  y ; 
			else y  =  y  -  x ; 
	} 
	s  =  x ; 
	return  s ; 
}