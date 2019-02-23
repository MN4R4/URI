#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bin(long long int valor){
	if(valor < 2) printf("%d",valor);
	else {
		bin(valor/2);
		printf("%d",valor%2);	
	}
	return 0;
}

int dec(long long int bin) {
	int valor, i;
	for(i = 0, valor = 0;bin > 0; i++){
		valor = valor + pow(2, i) * (bin % 10);
        bin = bin / 10;
	}
    return valor;
}

int main(){
	
	long long int valor;
	int a, i = 0;
	char b[128], c[4];
	char lista[3][4] = {"hex","dec","bin"};
	
	scanf("%d",&a);
	
	while(a--){
		scanf("%s %s", b, c);
		if(!strcmp(c,lista[0])){
			valor = strtol(b, NULL, 16); 
			printf("Case %d:\n%d dec\n",++i,valor);
			bin(valor); printf(" bin\n"); 
		} else if(!strcmp(c,lista[1])){
			valor = atoll(b);
			printf("Case %d:\n%x hex\n",++i,valor);
			bin(valor); printf(" bin\n");
		} else if(!strcmp(c,lista[2])){
			valor = atoll(b);
			printf("Case %d:\n%d dec\n",++i,dec(valor));
			printf("%x hex\n",dec(valor));	
		}
		printf("\n");
		getchar();
	}
	
	return 0;
}
