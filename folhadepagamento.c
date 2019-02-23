#include <stdio.h>

int main(){
	
	int a;
	int b, i, sum ;
	
	scanf("%d",&a);
	
	while(a--){
		scanf("%d",&b);
		if ( b % 2 == 0 ){
			for(i = 2, sum = 0; i <= b ; i++){
				if (i <= b / 2){
					if(b % i == 0){
						sum += i;
					}	
				} else {
					sum += b + 1;
					i = b;
				}
			}
		} else {
			for(i = 1, sum = 0; i <= b ; i += 2){
				if (i <= b / 2){
					if(b % i == 0){
						sum += i;
					}	
				} else {
					sum += b;
					i = b;
				}
			}
		}		
		printf("%d\n",sum);
	}
	return 0;
}
