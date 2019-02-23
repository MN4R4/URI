#include <stdio.h>

int main(){
	
	int i, j, f, z, h, a;
	
	scanf("%d",&a);
	for(i = 2 , j = 0 , f = 2 , z = 4 ; i <= a ; i++){
		if (i < 3){
			++j;
		} else {
			++j;
			if(j == f){
				for(h = 0; h < 2; h++){
					i++;
				}
				z += 2;
				f += z;
					
			} 
		}
	}
	printf("valor final = %d\n",j);
	return 0;
}
