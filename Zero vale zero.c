#include <stdio.h>
#include <string.h>

int main(){
	
	int a = 1, b = 1, i, j;
	char c[128], d[128];
	
	while(a != 0 && b != 0){
		scanf("%d %d",&a,&b);
		if (a != 0 && b != 0){
			sprintf(c,"%d",a + b);
			for(i = 0, j = 0; c[i] != '\0'; i++){
				if (c[i] != '0'){
					d[j++] = c[i]; 
			}
		}
		d[j] = '\0';
		puts(d);		
		}  
	}
	return 0;
}
