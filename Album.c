#include <stdio.h>

int main(){
	
	int n, m, i, j, z;
	
	scanf("%d %d",&n,&m);
	int f[m];
	for(i = 0 ; i < m ; i++){
		scanf("%d",&f[i]);
		for(j = 0; j < i ; j++){
			if(f[i] == f[j]){
				f[i] = 101;
			}
		}
	}
	for(i = 0, z = 0 ; i < m ; i++){
		if(f[i] != 101){
			z++;
		}
	}
	printf("%d\n", n - z);
	return 0;
}
