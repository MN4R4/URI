#include <stdio.h>
#include <string.h>

typedef struct lista vetor;

struct lista{
	char d[11];
};

int main(){
	
	int N, i, j;
	char b[2] = ".";
	
	scanf("%d",&N);
	vetor a[N];
	
	for (i = 0; i < N ; i++){
		scanf("%s",a[i].d);
	}
	for (i = 0, j = 0; i < N ; i++){
		if(!strncmp(a[i].d,b,1)){
			j++;
			if(!strncmp(a[i+1].d,b,1)){
				j--;
				if(!strncmp(a[i+2].d,b,1)){
					j = 54;
					break;
				}
			}
		} 
	}
	printf(j == 54 ? "N\n" : "%d\n",j);
	
	return 0;
}
