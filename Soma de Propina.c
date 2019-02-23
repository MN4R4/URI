#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct lista vetor;

struct lista{
	char cpf[12], dim[18];
};

double vlr(char *a){
	char *p;
	double resp = strtod(a, &p);
	return resp;
};

int main(){
	
	int a = 2, i, j, f;
	char b[61], c[61];
	
	vetor d[3];
	scanf("%s %s",b, c);
	for(i = 0, j = 0, f = 0; b[i] ; i++){
		if (isdigit(b[i]) && j != 11){
			d[0].cpf[j++] = b[i];	
		} else if(isdigit(b[i]) || b[i] == '.' && j == 11){
			d[0].dim[f++] = b[i];	
		}
	}
	for( i = 0, f = 0 ; c[i] ; i++){
		if(isdigit(c[i]) || c[i] == '.') d[1].dim[f++] = c[i];
	}
	printf("valor1 = %lf\nvalor2 = %lf\n",vlr(d[0].dim),vlr(d[1].dim));
	printf("cpf %s\n%.2lf\n",d[0].cpf,vlr(d[0].dim)+ vlr(d[1].dim));
	
	return 0;
}
