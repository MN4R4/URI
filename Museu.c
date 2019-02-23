#include <stdio.h>
#include <math.h>
#define MAX 1000
#define INF 100001

int grafo[MAX][MAX];
int tempo[MAX];

int main () {

  int s, c;
  int o, d, t;
  int i, j, k;

  int max;
  max = INF;

  scanf("%d %d", &s, &c);

  	for (i = 0; i < s; i++) {
    	scanf("%d", &tempo[i]);
    	for(j = 0; j < s; j++) {
      		grafo[i][j] = INF;
    	}
  	}

	for (i = 0; i < c; i++) {
		scanf ("%d %d %d", &o, &d, &t);
	    o--; d--;
	    grafo[o][d] = t + tempo[d];
	}

  	for (i = 0; i < s; i++){
  		for (j = 0; j < s; j++){
  			for (k = 0; k < s; k++){
  				grafo[i][j] = fmin(grafo[i][j],grafo[i][k] + grafo[k][j]);		
			}
		} 
	} 
    	
  	for (i = 0; i < s; i++){
  		for (j = 0; j < s; j++){
  			max = fmin(max,grafo[i][j] + grafo[j][i]);
		} 
	} 
  	printf ("%d\n", max);
  	return (0);
}
