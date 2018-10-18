#include <stdio.h>

int main (void){
	
	double v[12][12] , sum = 0.0 ;
	char c[2];
	int i , j ;
	
	scanf( "%s" , &c);
	
	for ( i = 0 ; i < 12 ; i++ ){
		for ( j = 0 ; j < 12 ; j++ ){
			scanf("%lf",&v[i][j]);
			if ( i < j && (i + j) > 11 ) sum += v[i][j];	 
		}
	}
	
	if ( c[0] == 'S' ) printf("%.1lf\n",sum);
	else if ( c[0] == 'M' ) printf("%.1lf\n",sum/30.0);
	
	return 0;
	
}
