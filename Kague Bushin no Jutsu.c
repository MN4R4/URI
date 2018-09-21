#include <stdio.h>

int main (void){
	
	int x , cont = 0;
	
	while ( scanf("%d",&x) != EOF ){
		
		while ( x != 0 ) {
			if ( x <=  1) x = 0;
			else{
				x /= 2;
				cont++;	
			} 
		}
		printf("%d\n", cont );
		cont = 0;
	}
	
	return 0;

}
