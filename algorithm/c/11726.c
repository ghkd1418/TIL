#include <stdio.h>
int main()
{
	// 피보나치
	int n;
	int dp[1010] = {0, };
	scanf("%d", &n);

	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i)
		dp[i] = (dp[i-2] + dp[i-1]) % 10007;

	printf("%d", dp[n]);

	return 0;
}