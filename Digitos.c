#include <stdio.h>
#include <math.h>

int main(){
	
	int a; 
	int b, c, result;
	
	scanf("%d",&a);
		while(a--){
			scanf("%d %d",&b,&c);
			result = c * log10f(b);
			printf("%d\n",result + 1);						
		}		
	return 0;
}
