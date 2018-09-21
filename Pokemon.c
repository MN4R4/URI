#include <stdio.h>
#include <math.h>

double HP(double a, double b, double c, int l){
	double resp;
	double aux;
		aux = sqrt(c) / 8;
		resp = ((a + b + aux + 50) * l) / 50 + 10;
		return resp;
}

double S(double a, double b, double c, int l){
	double resp;
	double aux;
		aux = sqrt(c) / 8;
		resp = ((a + b + aux) * l) / 50 + 5;
		return resp;
}

typedef struct pokemon lista;

struct pokemon{
	char v[31];
	int level;
	double base[5];
	double quatro[5];
	double ev[5];
};

int main(){
	
	int a, i, j, f;
	
	scanf("%d",&a);
	lista p[a];
	
	for(i = 0, f = 0; i < a ; i++, ++f){
		scanf("%s",p[i].v);
		scanf("%d",&p[i].level);		
		for(j = 0 ; j < 4 ; j++){
			scanf("%lf %lf %lf",&p[i].base[j],&p[i].quatro[j],&p[i].ev[j]);
		}
		printf("Caso #%d: %s nivel %d\n",f,p[i].v,p[i].level);
		printf("HP: %.lf\n",floor(HP(p[i].quatro[0],p[i].base[0],p[i].ev[0],p[i].level)));
		printf("AT: %.lf\n",floor(S(p[i].quatro[1],p[i].base[1],p[i].ev[1],p[i].level)));
		printf("DF: %.lf\n",floor(S(p[i].base[2],p[i].quatro[2],p[i].ev[2],p[i].level)));
		printf("SP: %.lf\n",floor(S(p[i].base[3],p[i].quatro[3],p[i].ev[3],p[i].level)));
	}
	
	return 0;	
}
