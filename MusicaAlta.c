#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
	int n, j, i, k, f;
	int fl, fc, jl, jc;
	double resp, resp2;
	char v[31];
	
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&k,&j);
		fl = 0; fc = 0; jl = 0; jc = 0;
		for( i = 0 ; i < j ; i++ ){
			scanf("%s",v);
			for( f = 0 ; f < strlen(v) ; f++ ){
				if (v[f] == 'F'){
					fl = i;
					fc = f;
				}else if ( v[f] == 'J'){
					jl = i;
					jc = f;
				}
			}
		}
		resp = sqrt(pow(abs(fl-jl)*10,2)  + pow(abs(fc-jc)*10,2));
		resp2 = k/pow(0.99,floor(resp));
		printf("%.0lf dBs\n", floor(resp2));
	}
	
	return 0;
}
