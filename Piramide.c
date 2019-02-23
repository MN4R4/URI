#include <stdio.h>

int min(int a, int b){
	if (a < b) return a;
	return b;
}

int main(){
	
	int n,i,j,k;
	
  	scanf("%d",&n);
	
	int m[n+1][n+1],dp[n+1][n+1];
  	
  	for (i = 1; i <= n; i++){
  		for (j = 1; j <= n; j++){
  			scanf("%d",&m[i][j]);
		}
	}
  	for (i = 1; i <= n; i++ ){
  		for (j = i; j <= n; j++ ){
    		dp[i][j] = 0;
    		for (k = j; k > j - i; k-- ){
    			dp[i][j] += m[i][k];
			}
			if (i > 1) dp[i][j] += min(dp[i-1][j], dp[i-1][j-1]);
		}
	}
    
  	printf("%d\n",dp[n][n]);
  
  	return 0;
}
