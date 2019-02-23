#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char p[51];
	char num[51];
	int i, j;
	long long int final, neg;
	
	while(gets(p) != NULL){
		
		for( i = 0 , j = 0, neg = 0; p[i] != '\0' ; i++ ){
			if(p[i] == 'o' || p[i] == 'O'){
				num[j++] = '0';	
			}else if(p[i] == 'l' ){
				num[j++] = '1';
			}else if (p[i] >= '0' && p[i] <= '9'){
				num[j++] = p[i];
			}else if(p[i] != ' ' && p[i] != ','){
				neg++;
			} 
		}
		num[j] = '\0';
		final = atoll(num);
		if(final > 2147483647 || neg > 0){
			printf("error\n");
		} else if ( j == 0 && num[j] == '\0'){
			printf("error\n");
		} else{
			printf("%lld\n",final);
		} 	
		final = 0;	
	}
	return 0;
}
