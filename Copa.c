#include <stdio.h>

int main(){
	
	char fase[5][10] = {"final", "semifinal", "quartas", "oitavas"};
	int a, b, f = 4;
	scanf("%d %d",&a,&b);
	a += 15;
	b += 15;
	while(a != b){
		f--;
		a /= 2;
		b /= 2;
	}
	printf("%s\n",fase[f]);
	
	return 0;
}
