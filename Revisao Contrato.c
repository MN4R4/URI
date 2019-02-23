#include <stdio.h>
#include <string.h>

int main(){
	
	char a[2],b[1024],c[1024];
	int i, j; 
	
	while(scanf("%s %s",a,b) != NULL){
		if(a == '0' && b == '0'){
			break;
		} else {
			for(i = 0,j = 0 ;b[i];i++){
				if(a[0] != b[i]) {
					c[j++] = b[i];
				}
			}
		}
		puts(c);
	} 
	return 0;
}
