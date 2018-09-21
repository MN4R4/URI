#include <stdio.h>
#include <string.h>

int main(void){
	
	char *v[3] = {"pedra","papel","tesoura"};
	char d[10], l[10], p[10];
	int  a, b, c;
	int i;
	
	while(scanf("%s %s %s", d, l, p) != EOF){
		for( i = 0 ; i < 3 ; i++ ){
			if (!strcmp(v[i],d)) a = i; 
			if (!strcmp(v[i],l)) b = i; 
			if (!strcmp(v[i],p)) c = i; 
		}	
	
		if ( a == 0 && b == 0 && c == 1 || a == 1 && b == 1 && c == 2 || a == 2 && b == 2 && c == 0 )
		printf("Urano perdeu algo muito precioso...\n");
		else if( a == 1 && b == 0 && c == 0 || a == 2 && b == 1 && c == 1 || a == 0 && b == 2 && c == 2 )
		printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
		else if( a == 0 && b == 1 && c == 0 || a == 1 && b == 2 && c == 1 || a == 2 && b == 0 && c == 2 ) 
		printf("Iron Maiden's gonna get you, no matter how far!\n");
		else 
		printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
	}	
	return 0;
}
