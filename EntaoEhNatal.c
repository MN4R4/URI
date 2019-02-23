#include <stdio.h>
#include <string.h>

int main(){
	
	int i, j, f;
	char a[15] = {'E','n','t','a','o',' ','e','h',' ','N','a','t','a','l','!'};
	scanf("%d",&i);
	for(j = 0; j < strlen(a); j++){
		if(a[j] == 'a'){
			for(f = 0 ; f < i ; f++){
				printf("%c",a[j]);	
			}
		} else {
			printf("%c",a[j]);
		}
	}
	printf("\n");
	return 0;
}
