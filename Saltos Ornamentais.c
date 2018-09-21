#include <stdio.h>

int main(){
	
	char nome[25];
	int x , i , j; 
	double mod,v[7],maior,menor,total;
	
	scanf("%d",&x);
	
	while(x != 0){
		scanf("%s",nome);
		scanf("%lf",&mod);
		do {
			for(i = 0 ; i < 7 ; i++){
			scanf("%lf",&v[i]);
			total += v[i];	
			}
			menor = v[0];
			maior = v[0];
			for (j = 0; j < 7 ; j++ ){
				if (v[j] > maior) maior = v[j];
        		if (v[j] < menor) menor = v[j];
			}	
		} while (i < 0) ; 
		printf("%s %.2lf\n",nome,(total-(maior+menor))*mod);
		total = 0;
		x--;
	}	
	return 0;
}
