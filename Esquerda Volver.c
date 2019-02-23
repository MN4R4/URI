#include <stdio.h>
#include <string.h>

int main(){
	
	int a = 1, i, resp, d, e;
	char p[1001];
	
	while( a != 0 ){
		scanf("%d",&a);
		d = 0;
		e = 0;
		if ( a != 0 ){
			
			scanf("%s",p);
			for(i = 0; i < strlen(p) ; i++){
				if (p[i] == 'D') d++;
				else if	( p[i] == 'E') e++; 
			}
			
			if ( e > d ){
				resp = (e - d) % 4;	
				printf( resp == 0 ? "N\n" : resp == 1 ? "O\n" : resp == 2 ? "S\n" : "L\n" );
			} else if (d > e) {
				resp = (d - e) % 4;	
				printf( resp == 0 ? "N\n" : resp == 1 ? "L\n" : resp == 2 ? "S\n" : "O\n" );
			} else printf("N\n");
		}
	}
	return 0;
}
