#include <stdio.h>
#include <string.h>

int main() {
	
	int b, c, d, ng, i;
    char a[51];
	
	getchar();
	while(gets(a) != NULL){
		for(i = 0, b = 0, c = 0, d = 0, ng = 0; i < strlen(a) ; i++){
			if(a[i] >= 'A' && a[i] <= 'Z'){
				b++;
			}
			if(a[i] >= 'a' && a[i] <= 'z'){
				c++;
			}
			if(a[i] >= '0' && a[i] <= '9'){
				d++;
			}
			if(a[i] >= ' ' && a[i] <= '/' || a[i] >= ':' && a[i] <= '@' || a[i] >= '[' && a[i] <= '`' || a[i] >= '{') {
				ng++;
			}
		}
		a[i] = '\0';
		
		if (b > 0 && c > 0 && d > 0 && ng == 0 && strlen(a) >= 6 && strlen(a) <= 32 ){
			printf("Senha valida.\n");
		} else {
			printf("Senha invalida.\n");
		} 
	}
    return 0;
}

