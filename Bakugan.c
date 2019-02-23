#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x = 1, i;
	int *m;
	int *l;
	
	while( x != 0 ){
		
		scanf("%d",&x);
	
		if ( x != 0 ){
			m = malloc( x * sizeof(int));
			l = malloc( x * sizeof(int));
			
			int extra = 10; int extrb = 10 ; int suma = 0 ;
			int sumb = 0 ; int conta = 0 ; int contb = 0 ;
			int resa = 0 ; int resb = 0;			
			
		for ( i = 0 ; i < x ; i++ ) {
			scanf("%d",&m[i]);
			suma += m[i];	
		}
		for ( i = 0 ; i < x ; i++ ) {
			scanf("%d",&l[i]);
			sumb += l[i];
		}
		
		for( i = 0 ; i < x - 2 ; i++ ){
			if(m[i] == m[i+1] && m[i] == m[i+2]) extra = i; 
			if(l[i] == l[i+1] && l[i] == l[i+2]) extrb = i;
			if (extra == extrb && extrb != 10){
				break;
			} else {
				if(extra < extrb) {
					resa += 30;
					break;
				} else if(extrb < extra){
					resb += 30;
					break;
				}
			}
			
		}
		resa += suma; resb += sumb;
		if ( resa > resb ) printf("M\n");
		else if ( resa < resb ) printf("L\n");
		else printf("T\n");
		free(m);
		free(l);
		}
	}
	return 0;
}
