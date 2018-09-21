#include<stdio.h>

long long int fat ( long long int n ){
	if ( n ) return n * fat( n-1 );
	else return 1;
	
}

int main(void){
	
	long long int x , y; 
	
	while ( (scanf( "%lld %lld" , &x , &y ))!= EOF ){
		
	printf( "%.0lld\n" , fat(x) + fat(y) );
		
	}
		
	return 0;	

}
