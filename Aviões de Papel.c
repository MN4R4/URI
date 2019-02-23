#include <stdio.h>

int main(){
	
	int c, p, f;
	
	scanf( "%d %d %d", &c, &p, &f );
	
	printf( c * f <= p ? "S\n" : "N\n" );
	
	return 0;
}
