#include <stdio.h>
#include <string.h>

int main(){

    char v[1001],s[1001];
    int i,j,n,l,a;

    scanf("%d",&a);
    getchar();
    while(a--){
	    gets(v);
	    for( i = 0 ;i < strlen(v); i++){
	        if((v[i] >= 'A' && v[i] <= 'Z') || (v[i] >= 'a'&& v[i] <= 'z'))
	            v[i] = v[i] + 3;
		}
	    for(j = strlen(v) - 1, n = 0; j >= 0 ; j--) s[n++] = v[j];
	    s[n] = '\0';
	    l = strlen(v)/2;
	    for( i = l ; i < strlen(v) ; i++) s[i] =  s[i] - 1;
	    printf("%s\n",s);
    }
    return 0 ;
}
