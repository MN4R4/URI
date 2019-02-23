#include <stdio.h>
#include <string.h>

int main(){
	
	int i, j;
	char a[301], b[301];
	
	while (gets(a)!= NULL){
		
		for(i = 0, j = 0; i < strlen(a) ; i++){
			if(a[i] >= '0' && a[i] <= '9' || a[i] == '#' || a[i] == '*'){
				b[j++] = a[i];
			} 
			if (a[i] >= 'A' && a[i] <= 'C' || a[i] >= 'a' && a[i] <= 'c'){
				b[j++] = '2';
			} else if (a[i] >= 'D' && a[i] <= 'F' || a[i] >= 'd' && a[i] <= 'f'){
				b[j++] = '3';
			} else if (a[i] >= 'G' && a[i] <= 'I' || a[i] >= 'g' && a[i] <= 'i'){
				b[j++] = '4';
			} else if (a[i] >= 'J' && a[i] <= 'L' || a[i] >= 'j' && a[i] <= 'l'){
				b[j++] = '5';
			} else if (a[i] >= 'M' && a[i] <= 'O' || a[i] >= 'm' && a[i] <= 'o'){
				b[j++] = '6';
			} else if (a[i] >= 'P' && a[i] <= 'S' || a[i] >= 'p' && a[i] <= 's'){
				b[j++] = '7';
			}else if (a[i] >= 'T' && a[i] <= 'V'  || a[i] >= 't' && a[i] <= 'v'){
				b[j++] = '8';
			}else if (a[i] >= 'W' && a[i] <= 'Z'  || a[i] >= 'w' && a[i] <= 'z'){
				b[j++] = '9';
			}	
		}
		b[j] = '\0';
		a[i] = '\0';
		printf("%s\n",b);
	}
	return 0;
}

	

