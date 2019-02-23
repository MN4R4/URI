#include <stdio.h>
#include <string.h>

int main(){
	
	int a, f;
	char v[1001];
	char s[1001];
	char p[1001];
	scanf("%d",&a);
	getchar();
	while(a--){
		int j, ta = 0, tb = 0, prima = -1, primb = -1;	
		gets(v);
		gets(s);
		gets(p);
		for(j = 0 ; j < strlen(v) ; j++){
			if(v[j] == s[j]) {
				++ta;
				if( v[j] == s[j] && v[j] != p[j] && prima == -1) prima = j; 	
			}
			if(v[j] == p[j]){
				++tb;
				if( v[j] == p[j] && v[j] != s[j] && primb == -1 ) primb = j; 	
			} 
		}
		if(ta > tb) printf("Instancia %d\ntime 1\n\n",++f);
		else if(tb > ta) printf("Instancia %d\ntime 2\n\n",++f);
		else {
			if ( prima < primb ) printf("Instancia %d\ntime 1\n\n",++f);
			else if ( primb < prima ) printf("Instancia %d\ntime 2\n\n",++f);
			else printf("Instancia %d\nempate\n\n",++f);
		}		
	}
	return 0;
}
