#include <stdio.h>
int main()
{
	int n, dp[1001] = {1, 1};
	
	scanf("%d", &n);

 	for (int i = 2; i <= n; ++i)
	{
		dp[i] = (dp[i-2] * 2 + dp[i-1]) % 10007;
	}
	printf("%d\n", dp[n]);
	return 0;
}