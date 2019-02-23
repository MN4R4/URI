#include <stdio.h>

long int mdc(long int m, long int n) {
    if (n==0) return m;
    return mdc(n, m % n);
  }

int main (){
	
	long int n1, n2, x;
	
	scanf("%d",&x);
	
	while ( x != 0 ){
		scanf("%ld %ld",&n1,&n2);
		printf("%ld\n", mdc(n1,n2));
		x--;
	}
	
	return 0;
}
