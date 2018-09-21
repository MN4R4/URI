#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef int Itemp;

typedef struct pilha {
   int    max;
   int    topo;
   Itemp *item;
} *Pilha;

Pilha pilha(int m) {
   Pilha P = malloc(sizeof(struct pilha));
   P->max  = m;
   P->topo = -1;
   P->item = malloc(m*sizeof(Itemp));
   return P;
}

int vaziap(Pilha P) {
   if( P->topo == -1 ) return 1;
   else return 0;
}

int cheiap(Pilha P) {
   if( P->topo == P->max-1 ) return 1;
   else return 0;
}

void empilha(Itemp x, Pilha P) {
   if( cheiap(P) ) { puts("pilha cheia!"); abort(); }
   P->topo++;
   P->item[P->topo] = x;
}

Itemp desempilha(Pilha P) {
   if( vaziap(P) ) { puts("pilha vazia!"); abort(); }
   Itemp x = P->item[P->topo];
   P->topo--;
   return x; 
}

Itemp topo(Pilha P) {
   if( vaziap(P) ) { puts("pilha vazia!"); abort(); }
   return P->item[P->topo];
}

void destroip(Pilha *Q) {
   free((*Q)->item);
   free(*Q);
   *Q = NULL;
}

int prio(char o) {
	   switch( o ) {
	      case '(': return 0;
	      case '+': 
	      case '-': return 1; 
		  case '*': 
	      case '/': return 2;
	      case '^': return 3;
	   }
	   return -1;
}

char *posfixa(char *e) {
   static char s[256];
   int j = 0, i;
   Pilha P = pilha(256);
   for( i = 0; e[i]; i++)
      if( e[i]=='(' ) empilha('(',P);
      else if( isalnum(e[i])) s[j++] = e[i];
      else if( strchr("+-/*^",e[i]) ) {
         while( !vaziap(P) && prio(topo(P))>=prio(e[i]) ) 
            s[j++] = desempilha(P);
         empilha(e[i],P);
      }
      else if( e[i] == ')' ) {
         while( topo(P)!='(' ) 
           s[j++] = desempilha(P);
         desempilha(P);
      }                                       
         while( !vaziap(P) )
      s[j++] = desempilha(P);
   s[j] = '\0';
   destroip(&P);
   return s;
} 


                                   
int main(void){
	
	char s[256];
	int x, i;
	
	scanf("%d",&x);
	
	for( i = 0 ; i < x ; i++ ){
		scanf("%s",&s);
		printf("%s\n",posfixa(s));	
	}
				
	return 0;
	
}
