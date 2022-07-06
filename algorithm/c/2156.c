#include <stdio.h>

int MAX(int x, int y, int z)
{
	if (x > y)
	{
		return x > z ? x : z;
	}
	return y > z ? y : z;
}

int dp[10001], podo[10001];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", &podo[i]);
	}
	dp[0] = podo[0];
	dp[1] = dp[0] + podo[1];
	dp[2] = dp[1] + podo[2];

	for (int i = 3; i <= n; ++i)
	{
		dp[i] = MAX(dp[i-1], dp[i-2] + podo[i], dp[i-3] + podo[i] + podo[i-1]);
	}
	printf("%d\n", dp[n]);

	
	return 0;
}