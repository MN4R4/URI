#include <stdio.h>
#include <string.h>

typedef struct lista vetor;

struct lista{
	char palavra[101];
};

int main(){
	
	int a, i, j, f, aux, cont;
	char b[9] = "oulupukk";
	
	scanf("%d",&a);
	vetor v[a + 1];
	getchar();
	for(i = 0 ; i < a ; i++){
	
		gets(v[i].palavra);
		
		for(j = 0 ; j < strlen(v[i].palavra); j++){
			if(b[0] == v[i].palavra[j]){
				aux = j;
				for(f = 0,cont = 0;b[f] != '\0' ; f++){
					if(b[f] == v[i].palavra[aux]){
						cont++;
					}
					aux++;
				}
				if (cont == 8){
					v[i].palavra[aux] = 'i'; 
					v[i].palavra[j-1] = 'J';
				}		
			}
		}
		printf("%s\n",v[i].palavra);
	}
	return 0;
}
