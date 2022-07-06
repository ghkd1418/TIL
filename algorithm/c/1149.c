#include <stdio.h>

int dp[1001][3];
#define MIN(x, y) x < y ? x : y; 
int mini(int x, int y, int z)
{
	int min = x;
	if (x > y)
		min = y;
	if (min > z)
		min = z;
	return min;
} 

int main()
{
	int n, min;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < 3; ++j)
			scanf("%d", &dp[i][j]);

	for (int i = 1; i < n; ++i)
	{
		dp[i][0] += MIN(dp[i-1][1], dp[i-1][2]);		
		dp[i][1] += MIN(dp[i-1][0], dp[i-1][2]);		
		dp[i][2] += MIN(dp[i-1][0], dp[i-1][1]);	
	}
	min = mini(dp[n-1][0], dp[n-1][1], dp[n-1][2]);
	printf("%d\n", min);

	return 0;
}