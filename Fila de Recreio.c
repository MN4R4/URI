#include <stdio.h>

void bubbleSort(int* vet, int length) {
	int i, j, temp;
	for (i = 0; i < length - 1; i++){
        for (j = (i+1); j < length; j++){
            if (vet[j] > vet[i]){
				temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

int main(){
	
	int n, t, i, j;
	int *p;
	int *f;
	
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		p = malloc( t * sizeof(int));
		f = malloc( t * sizeof(int)); 
		int cont = 0;
		for(i = 0; i < t ; i++){
			scanf("%d",&p[i]);
			f[i] = p[i];
		}
		bubbleSort(p,t);
		for(j = 0; j < t ; j++ ){
			if(p[j] == f[j]){
				cont++;
			}
		}
		printf("%d\n",cont);
		free(p);
		free(f);
	}
	return 0;
}
