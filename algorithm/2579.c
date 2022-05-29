#include <stdio.h>

#define MIN(x, y) x > y ? x : y

int main()
{
	
	int n, dp[301] = {0, }, sum;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", &dp[i]);
	}

	sum = dp[n];
	for (int i = 0; i < n; ++i)
	{
		 
	}
	printf("%d\n", sum);
	return 0;
}
