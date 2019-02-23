#include <stdio.h>

int main (void) {
   
   int x , b , v[6] , dabriel , guarte ;
   
   scanf("%d", &x);
   
   while( x != 0 ){
   	
   	scanf("%d",&b);
    scanf("%d %d %d", &v[0], &v[1] ,&v[2]);
   	scanf("%d %d %d", &v[3], &v[4] ,&v[5]);
   	
	if( v[2] % 2 == 0 ) dabriel = (v[0]+v[1])/2 + b; 
   	else dabriel = (v[0]+v[1])/2; 
		
	if ( v[5] % 2 == 0 ) guarte  = (v[3]+v[4])/2 + b; 	
	else guarte  = (v[3]+v[4])/2; 
	
   	if(dabriel > guarte) printf("Dabriel\n");
   	else if (guarte > dabriel) printf("Guarte\n");
	else printf("Empate\n");   
   	x--; 
   }
   return 0;   
}
