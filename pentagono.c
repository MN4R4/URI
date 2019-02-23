#include <stdio.h>
#include <math.h>

int main(){
	
	int a;
	double b, h, res;
	double tg;
	tg = tan(36.0 * M_PI / 180.0);
	scanf("%d",&a);
	while(a--){
		scanf("%lf",&b);
		h = b/2.0/tg;
		res = (((b/2.0) * h) / 2.0) * 10.0;
		printf("%.3lf\n",res);
	}
	return 0;
}
