#include <stdio.h>
#include <string.h>

int main(){
	
	int a, b, c;
	char d[15];
	scanf("%d",&a);
	while(a--){
		scanf("%d%c%d",&b,&d,&c);
		if(d[0] >= 'a' && d[0] <= 'z' && b != c){
			printf("%d\n",b + c);
		} else if(d[0] >= 'A' && d[0] <= 'Z' && b != c){
			printf("%d\n",c-b);
		} else if(b == c){
			printf("%d\n",b*c);
		}
	}
	return 0;
}
