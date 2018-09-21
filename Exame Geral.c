#include <stdio.h>
#include <stdlib.h>

int separa (int v[], int p, int r)  {
   int c = v[p], i = p+1, j = r, t;         
   while (1) {                              
      while (i <= r && v[i] <= c) ++i;      
      while (c < v[j]) --j;                 
      if (i >= j) break;                    
      t = v[i], v[i] = v[j], v[j] = t;      
      ++i; --j;                             
   }                                        
   v[p] = v[j], v[j] = c;                   
   return j;                                
}

void quicksort (int v[], int p, int r){
   
   int j;
                            
   if (p < r) {                   
      j = separa (v, p, r);       
      quicksort (v, p, j-1);      
      quicksort (v, j+1, r);      
   }
}

int main(void){
	
	int a, b, c, i , j , cont;
	
	int *v, *p;
	
	while(scanf("%d %d",&a,&b)!=EOF){
		
		v = malloc(a*sizeof(int));
		p = malloc(a*sizeof(int));
		cont = 0;
		
		for( i = 0 ; i < a ; i++ ){
			scanf("%d",&v[i]);
		}
		
		quicksort(v,0,a-1);
		
		for ( j = a - 1  ; j >= 0 ; j--){
			p[cont] = v[j];
			cont++;
		}
		
		while( b !=0 ){
			scanf("%d",&c);
			printf("%d\n",p[c-1]);
			b--;
		}
	
	}
	
	return 0;
}
