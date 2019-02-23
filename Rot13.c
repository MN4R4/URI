#include <stdio.h>
#include <string.h>

int main(){
	
	char s[51];
	char v[51];
	int i, w = 0;
	
	while(gets(v) != NULL){
		for(i = 0; v[i] != '\0'; i++){
			if(v[i] >= 'a' && v[i] <= 'm') {
				s[w] = v[i] + 13;
				v[i] = s[w];	
			} else if(v[i] > 'm' && v[i] <= 'z') {
			 	s[w] = (13 -('z' - v[i])) + 96;
				v[i] = s[w]; 
			} 
			if(v[i] >= 'A' && v[i] <= 'M'){
				s[w] = v[i] + 13;
				v[i] = s[w];
			} else if (v[i] > 'M' && v[i] <= 'Z'){
				s[w] = (13 - ('Z' - v[i])) + 64;
				v[i] = s[w]; 
			}
		}
		puts(v);
	}
	return 0;
}
