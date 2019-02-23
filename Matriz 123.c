#include <stdio.h>

int main (void){
	
	double *v;
	int i , j , x;
	
	while(scanf("%d",&x)!= EOF){
		
		v = malloc( x * sizeof ( int ) ); 
	
	for ( i = 0 ; i < x ; i++ ){
		for ( j = 0 ; j < x  ; j++ ){
			if ( i + j + 1  == x) printf("2");
			else if ( i == j ) printf ("1");
			else printf ("3");
		}
		printf("\n");
	}
	
	}
	
	return 0;
	
}
