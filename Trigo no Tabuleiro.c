#include<stdio.h>
#include<math.h>

int main(void) {
	
  int x, y;
  
  unsigned long long int a, b;
  
  scanf("%d",&x);
  
  while (x != 0){
  	
  	scanf("%d",&y);
  	
  	if ( y >= 64) printf("1537228672809129 kg\n");
  	else {
  	a = 1;
  	b = a * pow(2,y);
  	printf("%lld kg\n",b/12/1000);	
	}
	
  	x--;
  	
  }
   
  return 0;
  
}
