#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int prim(long long int n){
	
	long long int vetor[n], i, j;	
	for (i = 2 ; i <= n ; i++) {
        vetor[i] = i;
    }
    for (i = 2 ; i <= n; i++) {
        if (vetor[i] == i) {
        	if(n == i) return 1;
        	for (j = i + i; j <= n ;j += i) {
            	vetor[j] = 0; 
        	}
        }
    }
    return 0;
}
       
int main(){
	
	long long int a, i, j;
	
	while(scanf("%lld",&a) != EOF){
		long long int p[a]; long long int b[a];
		for(i = 0, j = 0; i < a ; i++){
			scanf("%lld",&p[i]);
			if(prim(p[i]) == 1){
				b[j++] = p[i];
			}
		}
		if(j < 1){
			printf("*\n");
		} else {
			for(i = 0 ; i < j ; i++){
				if ( i == j - 1 ) printf("%lld\n",b[i]); 
				else printf("%lld ",b[i]);
			}	
		} 
	}
	return 0;
}
