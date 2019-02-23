#include <stdio.h>

int main(){
	
	int x;
	char b[8];
	scanf("%d",&x);
	
	while( x != 0){
		scanf("%s",b);
		if (strlen(b) != 7){
			printf("FAILURE\n");
		} else {
			switch (b[7]){
				case '1' || '2' :
				    printf("MONDAY\n");
				    break;
				case '4' || '3':
				    printf("TUESDAY\n");
				    break;
				case (('6') || ('5')) :
				    printf("WEDNESDAY\n");
				    break;
				case (('8') || ('7')) :
				    printf("THURSDAY\n");
				    break;
				case (('0') || ('9')) :
				    printf("FRIDAY\n");
				    break;    
				default
				     break;
		}
		
	x--;
	}
	
}
