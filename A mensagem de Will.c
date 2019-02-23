#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	char v[27];
	int *t;
	int a, i, j;
	
	while( scanf("%s",&v)!=EOF ){
		
		scanf("%d",&a);
		
		t = malloc (a * sizeof ( int ));
		 
		for ( i = 0 ; i < a ; i++ ){
			scanf("%d",&t[i]);
		}
		for ( j = 0 ; j < a ; j++ ){
			printf("%c",v[t[j]-1]);
			if ( a - 1 == j ){
				printf("\n");
			}
		}
		free(t);
	}
		
	return 0;
	
}
