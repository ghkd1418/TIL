#include <stdio.h>
//전역변수로 선언하면 힙 영역에 스택에 비해 큰 메모리 사용 가능
long long dp[1000001];

int main()
{
	int n;
	scanf("%d", &n);

	dp[0] = 1;
	
	dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		dp[i] = (dp[i-1] + dp[i-2]) % 15746;
	}
	printf("%d\n", dp[n]);
	return 0;
}