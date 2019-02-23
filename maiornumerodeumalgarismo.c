#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(char *p, int c){
	int i, j = 0;
	for(i = 0; i < c ; i++){
		j += p[i] - '0';
	}
	return j;
}

int main(){
	
	char a[1001], b[1001];
	scanf("%s %s", a, b);
	while( a != '0' && b != '0'){
		if (a[0] != '0' && b[0] != '0'){
			if (soma(a,strlen(a)) > soma(b,strlen(b))){
				printf("1\n");	
			} else if (soma(a,strlen(a)) < soma(b,strlen(b))){
				printf("2\n");	
			} else {
				printf("0\n");	
			}
			scanf("%s %s", a, b);
		} else {
			break;
		}	
	}
	return 0;
}
