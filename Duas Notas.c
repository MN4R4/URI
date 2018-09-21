#include <stdio.h>

int main(){
	
	int v[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
	int x = 1, y = 1, i, cont;
	
	while (x!=0 && y!=0){
		scanf("%d %d",&x,&y);
		
		if (x!=0 && y!=0){
			for( i = 0, cont = 0 ; i < 15 ; i++ ){
				if (v[i] == y-x) cont++;
			}

		if ( cont > 0 ) printf("possible\n");
		else printf("impossible\n");
			
		}
	
	}
	
    return 0;
}
