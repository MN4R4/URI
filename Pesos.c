#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, i;
	int *p;
	char r = 'S';  
	
	scanf("%d",&a);
	p = malloc((a + 1) * sizeof(int));
	
	p[0] = 0;
	
	for(i = 1; i < a + 1 ; i++){
		scanf("%d",&p[i]);
	}
	for(i = 0; i < a; i++){
		if(p[i + 1] - p[i] > 8) {
			r = 'N';
			break;	
		}
	}
	printf("%c\n",r);
	return 0;
}
