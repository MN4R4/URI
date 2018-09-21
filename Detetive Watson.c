#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x = 1, i, j;
	int *p;
	int maior;
	int susp;
	int index;
	
	while( x != 0 ){
		scanf("%d",&x);
		if ( x != 0 ){
			maior = 0;
			p = malloc( x * sizeof(int));
			for( i = 0 ; i < x ; i++ ){
				scanf("%d",&p[i]);
				if ( p[i] > maior ) maior = p[i];
			}
			
			index = 0;
			susp = 0;
				
			for ( j = 0 ; j < x ; j++ ){
				if (p[j] > susp && p[j] != maior) {
					susp = p[j];
					index = j;
				}
			}
			printf("%d\n",index + 1);
			free(p);	
		}
	}
	return 0; 
}
