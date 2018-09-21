#include <stdio.h>
#include <string.h>

int main(){
	
	int a, i, w, j;
	char v[1001];
	char f[1001];
	
	scanf("%d",&a);
	getchar();
	while(a--){
		gets(v);
		for(i = 0, w = 0; i < strlen(v) ; i++ ){
			if(i == 0 && v[0] != ' ')f[w++] = v[0];
			else if( v[i] == ' ' && v[i+1] != ' ') f[w++] = v[i + 1];	
		}
		f[w] = '\0';
		for(j = 0;f[j] != '\0'; j++){
			if( j == strlen(f)-1) printf("%c\n",f[j]);
			else printf("%c",f[j]);
		}
			
	}
	return 0;
}
