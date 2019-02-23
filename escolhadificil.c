#include <stdio.h>

int main(){
	
	int a, b, c;
	int d, e, f;
	int res = 0;
	
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	
	if(d - a >= 0){
		res += d - a; 	
	} 
	if(e - b >= 0){
		res += e - b;
	} 
	if(f - c >= 0){
		res += f - c;
	} 
	printf("%d\n",res);
	
	return 0;
}
