#include <stdio.h>
#include <string.h>

int main(){
	
	int a, i, j, f, g, cont, sec;
	char b[128],c[128],d[256];
	
	scanf("%d",&a);
	getchar();
	while(a--){
		
		gets(b);
		
		gets(c);
		
		for(i = 0, j = 0, f = 0, g = 0; i < strlen(b); i++){
			cont = 2;
			while(cont--){
				d[j++] = b[f++];
			}
			sec  = 2;
			while(sec--){
				d[j++] = c[g++];
			}
		}
		d[j] = '\0';
		printf("%s\n",d);
	}
	return 0;
}
