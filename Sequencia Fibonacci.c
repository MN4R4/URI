#include <stdio.h>

int main () {
	
	long long int  v[17] , i;
	
	int x;
	
	while(scanf("%d",&x)!=EOF){
		v[0] = 0;
		v[1] = 1;
		if ( x <= 2 )printf("%lld\n",v[x-1]);
		else {
			for ( i = 2 ; i <= 16 ; i++ ){
				if (i%2==0) {
					v[i] = v[i-1] + v[i-2];
				} else {
					v[i] = v[i-1] * v[i-2];
				}
			}
		printf("%lld\n",v[x-1]);		
		}				
	} 
	return 0 ;
}
