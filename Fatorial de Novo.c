#include <stdio.h>

long long int fat( long long int n ){
	if ( n ) return n * fat( n-1 );
	else return 1;	
}

long long int conta(long long int a){
	int i = 0;
	while(a > 0){
		a /= 10;
		i++;
	}
	return i;
}

int main(){
	
	long long int a, b, i, sum, res;
	
	scanf("%lld",&a);
	while(a != 0){
		sum = 0; i = 1;
		res = conta(a);
		while(a > 0){
			b = a % 10;
			if (i <= res){
				sum += b * fat(i++);
			}
			a /= 10;
		}
		printf("%lld\n",sum);
		scanf("%lld",&a);
	}
	return 0;
}
