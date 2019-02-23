#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	long long int i, j, n;
	scanf("%lld",&n);
	long long int vetor[n];
	for ( i = 2 ; i <= n ; i++ ) {
        vetor[i] = i;
    }
    for ( i = 2 ; i <= n; i++) {
        if (vetor[i] == i && n == i) {
        	printf("primo\n");
        	for (j = i + i ; j <= n ; j += i) {
            	vetor[j] = 0; 
        	}
        }
    }
    free(vetor);
    printf("nao primo\n");
}
