#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int atrib, i, j, sort;
	int Mcartas,Lcartas;
	int e1, e2;
	
	while(scanf("%d",&atrib) != EOF ){
		
		scanf("%d %d",&Mcartas,&Lcartas);
		
		int vm[Mcartas][atrib];
		int vl[Lcartas][atrib];
		
		for ( i = 0 ; i < Mcartas ; i++ ){
			for ( j = 0 ; j < atrib ; j++){
				scanf("%d",&vm[i][j]);
			}
		}
		for ( i = 0 ; i < Lcartas ; i++ ){
			for ( j = 0 ; j < atrib ; j++){
				scanf("%d",&vl[i][j]);
			}
		}
		scanf("%d %d", &e1, &e2);
		scanf("%d",&sort);
		
		if(vm[e1-1][sort-1] > vl[e2-1][sort-1]) printf("Marcos\n");
		else if (vm[e1-1][sort-1] < vl[e2-1][sort-1]) printf("Leonardo\n");
		else printf("Empate\n");
	}
	return 0;
}
