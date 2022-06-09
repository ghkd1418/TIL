#include <stdio.h>

#define MAX(x, y) x > y ? x : y 

int dp[2][100005];

int main()
{
	int t, n;
	scanf("%d", &t);
	for (int k = 0; k < t; ++k)
	{
		scanf("%d", &n);

		for (int i = 0; i < 2; ++i)
			for (int j = 2; j <= n+1; ++j)
			{
				scanf("%d", &dp[i][j]);
			}
		
		for (int i = 2; i <= n+1; ++i)
		{
			dp[0][i] += MAX(dp[1][i-1], dp[1][i-2]);
			dp[1][i] += MAX(dp[0][i-1], dp[0][i-2]);
			printf("dp[0][%d] = %d\n", i, dp[0][i]);
			printf("dp[1][%d] = %d\n", i, dp[1][i]);
		}
		printf("%d\n", MAX(dp[0][n+1], dp[1][n+1]));
	}

	return 0;
}