#include <stdio.h>
#include <string.h>

typedef struct churra lista;

struct churra{
	char carne[21];
	int price;
};

int main(void){
	
	int x, i, w, j, z, menor, aux;
	char valor[21] = "";
			
	while( scanf("%d",&x) != EOF ){
		
		lista a[x];
			
		for( i = 0 ; i < x ; i++ ) {
			scanf("%s",a[i].carne);
			scanf("%d",&a[i].price);
		}
		
		for (i = 0; i < x; i++){
        	for (j = (i+1); j < x; j++){
            	if (a[j].price < a[i].price){
                	aux = a[i].price;
	                a[i].price = a[j].price;
	                a[j].price = aux;
	                strcpy(valor,a[i].carne);
	                strcpy(a[i].carne,a[j].carne);
	                strcpy(a[j].carne,valor);
            	}
        	}
    	}
		
		for ( j = 0 ; j < x ; j++ ){
			if ( j == x - 1) printf("%s\n",a[j].carne);	
			else printf("%s ",a[j].carne);	
		}
	}
	
	return 0;
}
