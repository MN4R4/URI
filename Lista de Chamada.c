#include <stdio.h>
#include <string.h>

typedef struct valor lista;

struct valor{
	char d[21];
};

int main(){
	
	int a, b, i, j;
	char temp[21];
	
	scanf("%d %d",&a,&b);
	lista c[a];
	for(i = 0; i < a ;i++){
		scanf("%s",c[i].d);
	}

    for (i = 0; i < a; i++) {
      for (j = 0; j < a - 1; j++) {
         if (strcmp(c[j].d, c[j + 1].d) > 0) {
            strcpy(temp, c[j].d);
            strcpy(c[j].d, c[j + 1].d);
            strcpy(c[j + 1].d, temp);
         }
      }
   }
	printf("%s\n",c[b-1].d);
	
	return 0;
}
