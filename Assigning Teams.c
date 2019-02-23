#include <stdio.h>
#include <math.h>

void bubble_sort(int vetor[], int n) {
    int k, j, aux;

    for (k = 0; k < n - 1; k++) {
        for (j = 0; j < n - k - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
	
	int i;
	int v[4];
	
	for ( i = 0 ; i < 4 ; i++ ){
		scanf("%d",&v[i]);
	}
	
	bubble_sort(v,4);
	
	printf("%d\n",abs(v[0] + v[3] - (v[1] + v[2])));
	
	return 0;
}
