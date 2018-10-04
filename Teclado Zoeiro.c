#include <stdio.h>
#include <string.h>

typedef struct valor lista;

struct valor{
	char prim[2];
	char sec[2];
};

int main(){
	
	int a, b;
	int j, i, f, g;
	char fra[101];
	
	scanf("%d %d",&a,&b);
	lista p[a];
	
	for( j = 0 ; j < a ; j++){
		scanf("%s %s",p[j].prim, p[j].sec);
	}
	getchar();
	for(g = 0; g < b ; g++){	
		scanf(" %[^\n]",fra);
		for(j = 0; j < strlen(fra) ; j++){
			for(f = 0; f < a; f++){
				if(fra[j] == p[f].prim[0]){
					fra[j] = p[f].sec[0];
				} else if (fra[j] == p[f].sec[0]){
					fra[j] = p[f].prim[0];
				}
			}
		}
		printf("%s\n",fra);		
	} 
	return 0;
}
