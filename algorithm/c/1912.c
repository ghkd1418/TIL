#include <stdio.h>

// dp[i-1] > 0 이전의 합이 음수라면 선택할 필요없이 현재부터 다시 선택
// dp[i] + dp[i-1] > 0 이전의 합과 현재의 수를 더한 값이 음수라면 선택 x

#define MAX(x, y) x > y ? x : y

int dp[100000], arr[100000];	

int main()
{
	int count, sum;
	scanf("%d", &count);
	for (int i = 1; i <= count; ++i)
	{
		scanf("%d", &arr[i]);
	}
	sum = arr[0] = -1000;
	dp[0] = arr[0] = -1000; 
	for (int i = 1; i <= count; ++i)
	{
		dp[i] = MAX(dp[i-1] + arr[i], arr[i]);
		sum = MAX(dp[i], sum);
	}
	printf("%d\n", sum);

	return 0;
}