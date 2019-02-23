#include <stdio.h>

int verifica(int a){
	int i, j, f;
	for(i = 2 ; i < a ; i++, j++){
		if (i < 3){
			j++;
		} else {
			for(f = 0;f < 2;i++){
				printf("valor = %d\n",i);		
			}
		}
	}
	
	 
}

int main(){
	
	int a, b, i, cont;
	
	scanf("%d",&a);
	while(a--){
		scanf("%d",&b);
		if (b < 2){
			cont++;
		} else {
			for(i = 1,cont = 0 ; i <= b ; i++){
				if(verifica(i) % 2 != 0){
					cont++;
				}
			}	
		}		
		printf("valor = %d\n",cont);
	}
	return 0;
}
