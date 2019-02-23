#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

int Diamantes (char s[]) {
    int i, j, d, m;
    j = strlen(s);
	for(i = 0, d = 0 , m = 0 ; i < j ; i++){
		if(s[i] == '<') m++;
			else
				if(s[i] == '>' && m ){
					d++;
					m--;
				}	
	}
	return d;
}
			
			
                               
int main(void){
	
	char s[1001];
	int x;
	
	scanf("%d",&x);
	
	while(x--){
		scanf("%s",s);
		printf("%d\n",Diamantes(s));
	}			
	return 0;	
}
