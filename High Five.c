// Aula 5 - Ordenacao e Busca - Exec. 4 Merge Sort
#include <stdio.h>

void intercala(int v[], int p, int m, int u){
	
	int w[u-p+1];
	int i = p, j = m + 1, k = 0;
	
	while( i <= m && j <= u){
		// alteração do codigo aqui
		if(v[i] > v[j]) w[k++] = v[i++];	
		else w[k++] = v[j++];	
		while( i <= m ) {
			w[k++] = v[i++];	
		}
		while( j <= u ){
			w[k++] = v[j++];
		} 
		for( k = 0 ; k <= u-p ; k++ ) {
			v[p+k] = w[k];
		} 
	}
}

void ms(int v[], int p, int u){
	if (p == u) return ;
	int m = (p+u)/2;
	ms(v,p,m);
	ms(v,m+1,u);
	intercala(v,p,m,u);
	return ;
}

void msort(int v[], int n){
	ms(v,0,n-1);
	return ;
}

int main(){
	int a, i;
	while(scanf("%d",&a) != EOF){
		int v[a];
		for(i = 0; i < a ; i++){
			scanf("%d",&v[i]);	
		}
		msort(v,a);
	} 
	return 0;
}
