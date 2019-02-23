#include <stdio.h>
#include <math.h>

int main (void){
	
	int x = 1 , y = 1,  xa = 1 , ya = 1  ;
	
	while( x != 0 && y != 0 && xa != 0 && ya != 0 ){
		scanf("%d %d %d %d",&x, &y,&xa,&ya);
		if(x != 0 && y != 0 && xa != 0 && ya != 0){
			if ( x == xa & y == ya ) printf("0\n");
			else if (abs(x - xa) == abs(y - ya) ||  x == xa || y == ya ) printf("1\n");
			else printf("2\n");	
		}
	}
	return 0;
}
