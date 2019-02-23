#include <stdio.h>
#include <stdlib.h>

int separa (int v[], int p, int r) {
   int c = v[r];
   int t, j = p, k;
   for (k = p; k < r ; ++k)
      if (v[k] <= c) {
         t = v[j], v[j] = v[k], v[k] = t;
         ++j; 
      } 
   t = v[j], v[j] = v[r], v[r] = t;
   
   return j; 
}

void quicksort (int v[], int p, int r) {
   if (p < r) {                   
      int j = separa (v, p, r);   
      quicksort (v, p, j-1);     
      quicksort (v, j + 1, r);      
   }
}
int main(){
	
	int a, i;
	int *p;
	char r = 'S';  
	
	scanf("%d",&a);
	p = malloc((a + 1) * sizeof(int));
	
	p[0] = 0;
	
	for(i = 1; i < a + 1 ; i++){
		scanf("%d",&p[i]);
	}
	quicksort(p,0,a);
	
	for(i = 0; i < a; i++){
		if(p[i + 1] - p[i] > 8) {
			r = 'N';
			break;	
		}
	}
	printf("%c\n",r);
	return 0;
}
