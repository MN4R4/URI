#include <stdio.h>

int main(void){
	
	long long int n, x, a, z, cont;
	
	while(scanf("%lld %lld",&n,&x) != EOF){
		z = n;
		cont = 0;
		if (n!=0){
			while(n!=0){
				a = x % 10;
				cont = cont + a;
				x /= 10;
				n--;
			}
			if (cont % 3 == 0) printf("%lld sim\n",cont);
			else printf("%lld nao\n",cont);
		} else printf("%lld nao\n",cont);		
	}
	return 0;
}
