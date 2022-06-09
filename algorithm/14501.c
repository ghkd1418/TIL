#include <stdio.h>

#define MAX(x, y) x > y ? x : y 
int t[18], p[18], dp[18]; 

int main()
{
	int n, profit;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d %d", &t[i], &p[i]);

	for (int i = n; i > 0; --i)
	{
		profit = i + t[i];
		if (profit > n+1) dp[i] = dp[i + 1];
		else dp[i] = MAX(dp[i+1], dp[profit] + p[i]);
	}
	printf("%d\n", dp[1]);

	return 0;
}