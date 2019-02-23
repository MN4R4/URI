#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b, i, j, z;
	int *p, *g, *f;
	
	while(scanf("%d %d",&a,&b) != EOF){
		
		p = malloc(a * sizeof(int)); g = malloc(b * sizeof(int)); f = malloc(a * sizeof(int));
		
		for(i = 1, j = 0; i <= a ;i++){
			p[j++] = i;	
		}
		
		for(i = 0; i < b ; i++){
			scanf("%d",&g[i]);
		}
		for(i = 0; i < b ; i++){
			for(j = 0 ;j < a ;j++){
				if(p[j] == g[i]){
					p[j] = 0;
				}
			}
		}
		
		for(i = 0, z = 0;i < a; i++){
			if(p[i] != 0){
				f[z++] = p[i];
			}	
		}
		if(z == 0){
			printf("*\n");
		} else {
			for(i = 0 ; i < z ; i++){
				if(i == z - 1){
					printf("%d \n",f[i]);	
				} else {
					printf("%d ",f[i]);
				}
			}
		}
	}
	return 0;
}
