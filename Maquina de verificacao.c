#include <stdio.h>

int main(){
	
	int a[6], b[6], i, j = 0;
	
	for(i = 0; i < 5 ; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0; i < 5 ; i++){
		scanf("%d",&b[i]);
	}
	for(i = 0; i < 5;i++){
		if(b[i] != a[i]){
			j++;
		}
	}
	printf(j == 5?"Y\n":"N\n");
	
	return 0;
}
