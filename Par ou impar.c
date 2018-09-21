#include <stdio.h>
#include <string.h>

int main(){
	
	int a, b; 
	int t = 1,cont = 0;
	char p1[11], p2[11];
	
	while( t != 0 ){
		scanf("%d",&t);
		if (t != 0 ){
			scanf("%s %s",p1,p2);
			printf("Teste %d\n",++cont);
			while(t--){
				scanf("%d %d",&a,&b);
				printf("%s\n",((a+b)%2 == 0 ? p1 : p2));	
			}
			printf("\n");
		}
	}
	return 0;
}


