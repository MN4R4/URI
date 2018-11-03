#include <stdio.h>
#include <string.h>

int main(){
	
	char a[1001],b[1001];
	int i, j, p;
	
	gets(a);
	
	for(i = 0, j = 0, p = 0; a[i] != '\0';i++){
		if ( a[i] != ' '){
			if(p == 0){
				p = 1;
			} else {
				b[j++] = a[i];
				p = 0;
			}
		} else {
			b[j++] = ' ';
		}
	}
	b[j] = '\0';
	puts(b);
	
	return 0;
}
