#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insercao (int n, int v[]) {
   
   int i, j, x;
   
   for (j = 1; j < n; ++j) {
      x = v[j];
      for (i = j - 1; i >= 0 && v[i] > x; --i) 
         v[i+1] = v[i];
      v[i+1] = x;
   }
   
}

int main(){
	
	int *p, *resp;
	int i, j, f, x, t;
	
	scanf("%d",&i);
	
	while(i--){
		scanf("%d",&x);
		f = 0;
		p = malloc(x * sizeof(int));
		resp = malloc(x * sizeof(int));
		for( j = 0 ; j < x; j++ ) {
			scanf("%d",&p[j]);
			if ( p[j] % 2 != 0 )	
			resp[f++] = p[j];
		}
		if ( f != 0 ){
			t = round(f/2);
			insercao(f,resp);
			for(j = 0 ; j < f ; j++ ){
				if (f != t && j != 0) {
					printf(" ");
					printf("%d",resp[--f]);
				} else if ( j == 0 ){
					printf("%d",resp[--f]);
				}
				
				if (j != t ) {
					printf(" ");
					printf("%d",resp[j]);	
				}
				
			}
			printf("\n");
		} else {
			printf("\n");
		}	
	}
	return 0;
}
