#include <stdio.h>

int main(){
	
	int a, b, *c, i;
	
	scanf("%d",&a);
	c = malloc(a * sizeof(int));
	for(i = 0, b = 0; i < a ; i++){
		scanf("%d",&c[i]);
		if(c[i] == 1){
			b++;
		}
	}
	printf("%d\n",b);
	
	return 0;
}
