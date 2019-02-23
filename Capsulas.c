#include <stdio.h>
#define max 100000000

int fortuna(int dia, int * ciclos, int d) {
	int ret = 0, i;
	for (i = 0; i < d;i++) {
		ret += (dia/ciclos[i]);	
	}
	return ret;
}

int main(){
	int lo, hi, mid;
	int n, f, i, *ciclos;
	
	scanf("%d %d", &n, &f);
	ciclos = malloc(n * sizeof(int));
	for(i = 0; i < n ; i++){
		scanf("%d",&ciclos[i]);
	}
	lo = 1;
	hi = max;
	while (lo < hi){
	    mid = lo + (hi-lo)/2;
	    if (fortuna(mid, ciclos, n) < f ) lo = mid + 1;
	    else hi = mid;    
	}

	printf("%d\n",lo);
	
	return 0;
}
