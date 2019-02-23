# include <stdio.h>
# include <stdlib.h>

long long int countingSort(long long int p[],long long int tam,long long int maior){
	
	long long int *c, *d;
	int i;
	
	c = malloc(maior * sizeof(long long int));
	d = malloc(tam * sizeof(long long int));
	
	for( i = 0; i < maior ; i++){
		c[i] = 0;
	}
	for(i = 0; i < tam ; i++){
		c[p[i]- 1] += 1; 
	}
	for(i = 1; i < maior ; i++){
		c[i] += c[i-1];
	}
	for(i = 0; i < tam ; i++){
		d[c[p[i]-1]-1] = p[i];
		c[p[i]-1]--;
	}
	for(i = 0; i < tam ;i++){
		p[i] = d[i];
	}
	free(c);
	free(d);
	return p;	
}

int main(){
    
	int a,i;
	long long int *p, b, maior;
	
	scanf("%d",&a);
	
	while(a--){
		maior = 0;
		scanf("%lld",&b);
		p = malloc(b * sizeof(long long int));
		for(i = 0; i < b ; i++){
			scanf("%lld",&p[i]);
			if(p[i] >= maior){
				maior = p[i];
			}
		}
		
		countingSort(p,b,maior);
		
		for(i = 0; i < b ; i++) {
			if( i == b - 1 ){
				printf("%lld\n",p[i]);
			} else {
				printf("%lld ",p[i]);	
			}
		}
		free(p);
	}
    return 0;
}


