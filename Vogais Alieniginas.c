#include <stdio.h>
#include <string.h>

int main(){
	
	char a[256], b[256];
	int c, i, j;
	
	while(gets(a)!= NULL){
		if(a[0] != '\0'){
			break;	
		} else {
			gets(b);
			for(i = 0, c = 0; b[i] != '\0';i++){
				for(j = 0; a[j] != '\0';j++){
					if(a[j] == b[i]) c++;
				}
			}
		printf("%d\n",c);
		} 	
	}
	return 0;
}
