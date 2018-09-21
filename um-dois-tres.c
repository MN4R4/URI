#include <stdio.h>
#include <string.h>

int main ( ){
	
	char b[5];
	char um[4]= {'o','n','e'};
	char dois[4]= {'t','w','o'};
	char tres[4]= {'t','h','r','e','e'};  
	int x, i, cont1, cont2, cont3, certo;

	scanf("%d",&x);
	
	while (x != 0) {
		
		scanf("%s",b);
		cont1 = 0;
		cont2 = 0;
		cont3 = 0;
		
		if (strlen(b) == 5){
			for( i = 0 ; tres[i] != '\0'; i++){
     			if(tres[i] == b[i]) cont3++;
			}
		} else {
			for( i = 0 ; um[i] != '\0'; i++){
     			if(um[i] == b[i]) cont1++;
			}
			for( i = 0 ; dois[i] != '\0'; i++){
     			if(dois[i] == b[i]) cont2++;
			}
			
		}
		
		if(cont1 > 1) printf("1\n");
		else if(cont2 > 1)printf("2\n");
		else if(cont3 > 1)printf("3\n");
			
		x--;	
	}
}
