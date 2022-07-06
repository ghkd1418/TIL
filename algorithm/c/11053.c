#include <stdio.h>

#define MAX(x, y) x > y ? x : y;
int arr[1001], dp[1001];

int main()
{
	// 이전 숫자 중 현재값보다 작은값중에 가지고있는 부분수열의 길이가 
	// 가장긴것에서 +1을 한값이 현재값에서 발생할수있는 가장 긴 부분수열
	// dp에 각 길이 저장
	int n, result = 0, max;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", &arr[i]);
		max = 0;
		for (int j = 0; j < n; ++j)
		{
			if (arr[i] > arr[j] && dp[j] > max)
			{
				max = dp[j];
			}
		}
		dp[i] = max + 1;
		result = MAX(result, dp[i]);
	}
	printf("%d", result);
	
	return 0;
}