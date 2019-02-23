#include <stdio.h>
#include <string.h>

int main(){
	
	int i, res = 0;
	char a[1001];
	
	gets(a);
	for(i = 0; i < strlen(a) ; i++){
		res += a[i] - '0';
		res %= 3;
	}
	printf("%d\n", res);
	
	return 0;
}
