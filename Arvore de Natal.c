# include <stdio.h>

int main (){
	
	int a, i, j, num = 0, cont;
	int b, c;
	
	while(scanf("%d",&a)!= EOF){
		
		b = 1; cont = 0;
		
		while(b < a){
			b += 2;	
			cont++;
		} 
		
		num = a / 2;
		
		for(i = 0, c = num ; i <= cont ; i++){
			for(j = 0; j < a; j++){
				if(i + j >= num && i + j <= c){
					printf("*");
				} else if( i + j >= c){
					j = a;
				} else {
					printf(" ");
				}		
			}
			printf("\n");
			c += 2;
		}
		for(i = 0, c = num ; i < 2 ; i++){
			for(j = 0; j < a; j++){
				if(i + j >= num && i + j <= c){
					printf("*");
				} else if( i + j >= c){
					j = a;
				} else {
					printf(" ");
				}		
			}
			printf("\n");
			c += 2;
		}
		printf("\n");
	}
	return 0;
}


