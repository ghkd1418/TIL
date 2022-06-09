#include <stdio.h>

long long dp[1001][10], sum;

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i <= 9; ++i)
	{
		dp[1][i] = 1;
		sum += dp[1][i];
	}

	for (int i = 2; i <= n; ++i)
	{
		dp[i][9] = sum % 10007;
		// printf("여기%d\n", dp[i][9]);
		for (int j = 8; j >= 0; --j)
		{
			dp[i][j] = (dp[i][j+1] - dp[i-1][j+1]) % 10007 ;
			// printf("저기%d\n", dp[i][j]); // 첫 오버플로우 발생
			sum = (sum + dp[i][j]) % 10007;
			// printf("sum = %lld\n", sum);
		}
	}
	printf("%lld\n", sum % 10007);
		
	return 0;
}