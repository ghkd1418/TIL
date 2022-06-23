#include <stdio.h>

int MAX(int x, int y)
{
	return x > y ? x : y;
} 

int dp[301];

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 3; i <= n+2; ++i)
		scanf("%d", &dp[i]);

	sum = dp[n+2];
	for (int i = n+2; i >= 3;)
	{
		dp[i] = MAX(dp[i-1] + dp[i-3], dp[i-2] + dp[i-3]);
		dp[i] = MAX(dp[i], dp[i-2] + dp[i-4]);
		if (MAX(dp[i], dp[i-2] + dp[i-4]) == dp[i-2] + dp[i-4])
		{
			sum += dp[i];
			i-=4;
			continue;
		}
		sum += dp[i];
		i -=3;
	}
	printf("%d\n", sum);
	return 0;
}

// dp[i-1] + dp[i-3]
// dp[i-2] + dp[i-3]
// dp[i-2] + dp[i-4]