#include <stdio.h>
#include <stdlib.h>

int prim(unsigned long long int n){
	unsigned long long int vetor[n], i, j;	
	for ( i = 2 ; i <= n ; i++ ) {
        vetor[i] = i;
    }
    for ( i = 2 ; i <= n; i++) {
        if (vetor[i] == i) {
        	if(n == i) return 1;
        	for (j = i + i ; j <= n ; j += i) {
            	vetor[j] = 0; 
        	}
        }
    }
    return 0;
}
	

int main(){
	
	unsigned long long int i, j, f, g;
	unsigned long long int a;
	
	while(scanf("%llu",&a)!= EOF){
		for(i = a, f = 0, j = 0; j < 2; i++){
			if(prim(i) == 1){
				if(j == 0){
					f = i;
					j++;
				} else {
					g = i;
					j++;
				}
			}
		}
		printf("%llu\n", g - f );
	}
	return 0;
}
