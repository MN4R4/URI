#include<stdio.h>

int mdc(int x, int y) {
	int i, menor;
	if (x < y) menor = x;
	else menor = y;
	
	for (i=menor; i>=1; i--) {
		if (!(x%i) && !(y%i)) return i;
	}
	return 0;
}

int mmc(int x, int y) {
	return x * y / mdc(x,y);
}

int main(){
	
	int a; 
	int b, c, d;
	
	while(scanf("%d",&a) != EOF){
		scanf("%d %d %d",&b,&c,&d);	
		printf("%d\n",mmc(b,mmc(c,d)) - a);
	}
	return 0;
}
