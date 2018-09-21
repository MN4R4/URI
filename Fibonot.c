#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool Square(long long int x){
	
	long long int s;
	s = sqrt(x);
	return (s * s == x);
}

bool isFib(long long int c){
	return (Square(5 * c * c + 4) || Square(5 * c * c - 4)) ;
}

int main(){
	
	long long int a, i, cont = 0;
	long long int res;
	
	scanf("%lld",&a);
	
	for(i = 4; cont != a ; i++){
		if(!isFib(i)){
			cont++;
			res = i;
		} 
	}
	
	printf("%lld\n",res);
	
	return 0;
	
}
