#include <stdio.h>
int main()
{
	int n, m , k, result = 0;
	scanf("%d %d %d", &n, &m, &k); 

	// 인턴쉽 참여 인원보다 한 팀을 만들 수 있는 상태
	while(n >= 2 && m >= 1 && n+m >= k + 3) 
	{
		n -= 2;
		m -= 1;
		result += 1;
	}
	printf("%d\n", result);
	return 0;
}