#include <stdio.h>
#include <string.h>

typedef struct lista valor;

struct lista{
	int ano;
	int dist;
	char a[55];
};

int main(){
	
	int num, menor, i, j;
	
	scanf("%d",&num);
	while( num != 0 ){
		valor p[num + 1];
		for(i = 0, j = 0, menor = 2113; i < num; i++){
			scanf("%s %d %d",p[i].a,&p[i].ano,&p[i].dist);
			if((p[i].ano - p[i].dist) < menor){
				menor = p[i].ano - p[i].dist;
				j = i;
			}
		}
		printf("%s\n",p[j].a);
		scanf("%d",&num);
	}
	return 0;
}
