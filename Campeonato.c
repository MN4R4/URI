#include <stdio.h>

int main(){
	
	char fase[5][10] = {"final", "semifinal", "quartas", "oitavas"};
	int a, b, i, j, f = 4;
	
  	for(i = 1; i <= 16; i++ ){
    	scanf("%d",&j);
    	if (j == 1) a = i + 15;
   		if (j == 9) b = i + 15;
  	}

	while(a != b){
		f--;
		a /= 2;
		b /= 2;
	}
	printf("%s\n",fase[f]);
	
	return 0;
}
