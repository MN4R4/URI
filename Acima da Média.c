#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x,y,i,j;
	double *p;
	double soma=0,cont=0,media;
	
	scanf("%d",&x);
	
	while(x!=0){
		
		scanf("%d",&y);
		
		p = malloc(y*sizeof(double));
		
		for( i = 0 ; i < y ; i++ ){
			
			scanf("%lf",&p[i]);
			soma += p[i];
			
		}
		
		media = soma/y;

		for( j = 0 ; j < y ; j++ ){
			
			if(p[j]>media)cont++;
			
		}

		printf ("%.3lf%%\n",100*cont/y) ;
		media = 0;
		soma = 0;
		cont = 0;
		x--;
	}	
	
	free(p);
	
	return 0;
	
}
