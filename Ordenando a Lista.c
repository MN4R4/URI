#include <stdio.h>
#include <string.h>

typedef struct valor lista;

struct valor{
	char d[21], b[2];
};

int main(){
	
	int a, i, j, f = 0, boas = 0, nao = 0;
	char temp[21];
	
	scanf("%d",&a);
	lista c[a];
	
	for(i = 0 ; i < a ; i++){
		scanf("%s",c[f].b);
		scanf("%s",c[f].d);
		if(c[f].b[0] == '+') boas++;
		else if(c[f].b[0] == '-') nao++;
		f++;
	}
	for (i = 0; i < a; i++) {
      	for (j = 0; j < a - 1; j++) {
         	if (strcmp(c[j].d, c[j + 1].d) > 0) {
            	strcpy(temp, c[j].d);
            	strcpy(c[j].d, c[j + 1].d);
            	strcpy(c[j + 1].d, temp);
         	}
      	}
   	}
   	for(i = 0; i < a ; i++) {
   		printf("%s\n",c[i].d);	
	}
	
	printf("Se comportaram: %d | Nao se comportaram: %d\n",boas,nao);
	return 0;
}




