#include <stdio.h>

int prim(int n){
	int d = 2;
	int EhPrimo = 1;		
	if (n <= 1) EhPrimo = 0;
    while (EhPrimo == 1 && d <= n / 2) {
		if (n % d  == 0)
	    	EhPrimo = 0;
		d = d + 1;
    }
    return EhPrimo;
}

int main(){
	
	int n, i, sum = 0;			
    int cont = 0;
    long long int dist = 60000000;
	scanf("%d", &n);
	
	for(i = n ; cont < 10 ; i++){
		if (prim(i)){
			sum += i;
			cont++;
		}
	}
	printf("%d km/h\n%lld h / %d d\n",sum,dist/sum,dist/sum/24);
    return 0;
}
