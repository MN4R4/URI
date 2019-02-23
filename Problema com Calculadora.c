#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct valor lista;

struct valor{
	char tam[10];
};


int main(){
	
	int a, f, j, i;
	char b[15];
	
	scanf("%d",&a);
	while(a--){
		scanf("%s",b);
		lista c[4];
		for(i = 0,f = 0, j = 0; b[i] ; i++){
			if(isdigit(b[i]) && isdigit(b[i+1])){
				c[f].tam[j++] = b[i];
			} else if((isdigit(b[i]))&& (!isdigit(b[i+1]))){
				c[f].tam[j++] = b[i];
				f++;
				j = 0;
			}
		}
		printf("%d\n",atoi(c[0].tam) + atoi(c[1].tam) + atoi(c[2].tam));
	}
	return 0;
}

