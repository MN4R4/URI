#include <stdio.h>

int prim(int n) {
	
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
	
	int a, cont, sec;
	
	while(scanf("%d",&a) != EOF) {
		cont = 0; sec = 0; 
		if(prim(a)) {
			cont++; 
			while(a > 0){
				if(prim(a % 10)) cont++;
				a /= 10;
				sec++;	
			}
		}
		printf( cont == 0 ? "Nada\n" : cont == 1 ? "Primo\n" : (sec + 1) == cont ? "Super\n" : "Primo\n");
	} 
	return 0;
}
