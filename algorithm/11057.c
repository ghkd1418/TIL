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
		for (int j = 8; j >= 0; --j)
		{
			dp[i][j] = (dp[i][j+1] - dp[i-1][j+1] + 10007) % 10007; // - 시 오버플로우 발생하므로 10007을 더해준다. 어차피 10007로 나눈 나머지가 들어가므로..
			sum = (sum + dp[i][j]) % 10007;
		}
	}
	printf("%lld\n", sum % 10007);
		
	return 0;
}