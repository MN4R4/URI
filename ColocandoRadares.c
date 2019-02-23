#include <stdio.h>

void contar(long long int b, long long int c){
	
	long long int i = 0, j = b;
	
	for(i = 0; j > 0 ; i++){
		j -= c;
	}
	printf("%lld\n",i);
}

int main(){
	
	long long int a, b, c;
	
	scanf("%lld",&a);
	
	while(a--){
		scanf("%lld %lld",&b,&c);
		contar(b,c);
	}
	
	return 0;
}
