#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000000000

void busca(long long int tam,long long int array[]){
	long long int i, menor = max;
	for(i = 0; i < tam ; i++){
		if (array[i] <= menor){
			menor = array[i];
		}
	}
	if ( menor == max ){
		printf("EMPTY\n");
	} else {
		printf("%d\n",menor);	
	}
	
}

void zerar(long long int array[]){
	long long int i;
	for(i = 0; i < strlen(array) ; i++){
		array[i] = max;
	}
}

int main(){
	
	int a, i ; 
	long long int c, j = 0; 
	char b[256];
	char push[5] = {"PUSH"};
	char pop[4] = {"POP"};
	char min[4] = {"MIN"};
	
	scanf("%d",&a);
	long long int vet[a];
	zerar(vet);
	for(i = 0 ; i < a ; i++){
		scanf("%s",b);
		if (!strncmp(b,push,4)){
			scanf("%lld",&c);
			vet[j++] = c;
		} else if (!strncmp(b,pop,3)){
			vet[j--] = max;
			if( j < 0 ){
				printf("EMPTY\n");
		}	 
		} else if (!strncmp(b,min,3)){
			busca(j,vet);
		}
	}
	return 0;
}
