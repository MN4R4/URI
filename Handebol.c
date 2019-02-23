#include <stdio.h>

int main(){
	
	int a, b, i, j, cont, jog = 0;
	scanf("%d %d",&a,&b);
	int c[b];
	for(i = 0;i < a; i++){
		for(j = 0,cont = 0; j < b ; j++){
			scanf("%d",&c[b]);
			if(c[b] > 0){
				cont++;
			}
		}
		if(cont >= b){
			jog++;
		} 
	}	
	printf("%d\n",jog);
	return 0;
}
