#include <stdio.h>

typedef struct feira lista;

struct feira
{
	char fruta[51];
	double preco;
};

typedef struct dona compra;

struct dona
{
	char fruta[51];
	int qtd;
};

int main(){
	
	int a, b, d, i, j, z;
	
	scanf("%d",&a);
	
	while(a--){
		double sum = 0;
		double total = 0;
		scanf("%d",&b);
		lista c[b];
		for(i = 0 ; i < b ; i++){
			scanf("%s",c[i].fruta);
			scanf("%lf",&c[i].preco);
		}
		scanf("%d",&d);
		compra e[d];
		for( j = 0 ; j < d ; j++ ){
			scanf("%s",e[j].fruta);
			scanf("%d",&e[j].qtd);
			for(z = 0 ; z < b ; z++ ){
				if(!strcmp(e[j].fruta,c[z].fruta)){
					sum = e[j].qtd * c[z].preco;
					total += sum;
				}
			}
		}
		printf("R$ %.2lf\n",total);	
	}
	return 0;
}
