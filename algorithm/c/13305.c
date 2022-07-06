#include <stdio.h>

int main()
{
	int count;
	scanf("%d", &count);
	int distance[count-1];
	int price[count];

	for (int i = 0; i < count-1; ++i)
	{
		scanf("%d", &distance[i]);
	}
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &price[i]);
	}

	// 다음가격이 최솟값이아니면 최솟값에 들어있는 가격 거리와 곱하기
	// 문제에서 제시한 최댓값인 10억 x 10억이 result에 들어올 수 잇으므로
	// 
	long long result = 0, min = 0;	

	for (int i = 0; i < count-1; ++i)
	{
		if (price[i] < min || i == 0)
		{
			min = price[i];	// 최솟값 갱신
		}
		result += min*distance[i];
	}
	printf("%lld\n", result);

	return 0;
}

