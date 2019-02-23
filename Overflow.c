#include <stdio.h>

int main(){
	
	int m;
	int a, b;
	char o;
	
	scanf("%d",&m);
	scanf("%d %c %d",&a,&o,&b);
	
	switch (o){
		case '+':
			printf( a + b <= m ?  "OK\n" : "OVERFLOW\n");
			break;
		case '-':
			printf( a - b <= m ?  "OK\n" : "OVERFLOW\n");
			break;
		case '*':
			printf( a * b <= m ?  "OK\n" : "OVERFLOW\n");
			break;
		case '/':
			printf( a / b <= m ?  "OK\n" : "OVERFLOW\n");
			break;	
	}
		
	return 0;
}
