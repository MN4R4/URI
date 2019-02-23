#include <stdio.h>
#include <string.h>

void maior( char *a, char *b){
	char c[1001];
	if(strlen(a) > strlen(b)){
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);
	} 
}

int main(){
	
	int i, j;
	char a[1001], b[1001];
	
	scanf("%s %s",a,b);
	maior(a,b);
	for(i = 0, j = 0;i < strlen(a);i++){
		if(!(a[i] == b[i])){
			j++;
		}
	}
	j += strlen(b);
	printf("%d\n",j);

	return 0;
}
