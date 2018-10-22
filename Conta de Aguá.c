#include <stdio.h>

int main(void){
	
	int a, b;
	int conta = 7;
	
	scanf("%d",&b);
	
	if ( b > 100 ) {
		a = b - 100;
		conta += a * 5 + 160 ;
		b -= a;			
	} else if ( b > 30 ){
		a = b - 30;
		conta += a * 2 + 20;
		b -= a;			
	} else if ( b > 10 ){
		a = b - 10;
		conta += a;
		b -= a;	
	}
	
	printf("%d\n",conta );
	
	return 0;
}
