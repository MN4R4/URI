#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char grid[1123][1123];
int n , m;
int xf, yf;

int dx[4] = {2, -2, 0, 0};
int dy[4] = {0, 0, 2, -2};

int best = 0;

void foo(int x, int y, int k)
{
	int i;
	if (x == xf && y == yf && k > best)
		best = k;
	else
	{
		for (i = 0; i < 4; i++)
		{
			if (grid[x + dx[i]][y + dy[i]] == '.')
			{
				int tmp = grid[x + dx[i]][y + dy[i]];
				grid[x + dx[i]][y + dy[i]] = '@';

				foo(x + dx[i], y + dy[i], k + 1);

				grid[x + dx[i]][y + dy[i]] = tmp;
			}
		}
	}
}

int main(void){
	
	int xi, yi, i, j;
	scanf("%d %d %d %d %d %d", &n, &m, &xi, &yi, &xf, &yf);
	memset(grid, '#', sizeof(grid));
	for (i = 1 ; i <= n; i++)
		for(j = 1; j <= m; j++)
			if (i % 2 || j % 2)
				grid[i][j] = '.';

	grid[xi][yi] = '#';
	foo(xi, yi, 1);
	printf("%d\n", 2 * best - 1);
	
}
