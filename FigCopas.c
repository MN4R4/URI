#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(void) {
  
  	int i, x;
  	int n, c, m;
	int carimbadas[100], ja_tem[100];
	int num_carimbadas = 0;
	int conta = 0;

  	scanf("%d %d %d", &n, &c, &m);
  	for (i = 0; i < n; i++) {
    	ja_tem[i] = FALSE;
    	carimbadas[i] = FALSE;
  	}
  	for (i = 0; i < c; i++) {
    	scanf("%d", &x);
    	x--;
    	if (carimbadas[x]) continue;
    		carimbadas[x] = TRUE;
    		num_carimbadas += 1;
  	}

  
  	for (i = 0; i < m; i++) {
    	scanf("%d", &x);
    	x--;
    	if (carimbadas[x]) ja_tem[x] = TRUE;
  	}

  	for (i = 0; i < n; i++){
  		if (carimbadas[i] && ja_tem[i]) conta += 1;
	}
    	
  	printf("%d\n", c - conta);

  	return 0;
  	
}
	
	

