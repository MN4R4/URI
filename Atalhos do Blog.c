#include <stdio.h>
#include <string.h>

int main(){
	
	char a[51];int i, j, f;
	
	while(gets(a) != NULL){
		for(i = 0, j = 0 , f = 0 ; i <  strlen(a) ; i++){
			if ( a[i] == '_' && j == 0){
				printf("<i>");
				j = 1;
			} else if ( a[i] == '_' && j == 1 ){
				printf("</i>");
				j = 0;
			} else if (a[i] == '*' && f == 0){
				printf("<b>");
				f = 1;
			} else if (a[i] == '*' && f == 1){
				printf("</b>");
				f = 0;
			} else {
				printf("%c",a[i]);
			} 
		}
		printf("\n");
	}
	return 0;
}
