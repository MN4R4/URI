#include <stdio.h>
#include <string.h>

void final(char a[]) {

    int i, j;
    
    for (j = 0; j < 20; j++) {
        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] == a[i + 2] && a[i + 1] == a[i + 3]){
                a[i + 2] = a[i + 4];
                a[i + 3] = a[i + 5];
            }
        }
    }
    printf("%s\n",a);
}

int main () {
    char frase[16500];
    
	gets(frase);
    
    final(frase);
    
    return 0;
}
