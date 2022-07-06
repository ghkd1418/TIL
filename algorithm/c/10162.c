#include <stdio.h>
int main()
{
	int T, arr[] = {300, 60, 10};
	int count[3] = {0, };

	scanf("%d", &T);

	// 가장 큰 수 부터 T를 나누며 몫이 횟수가 되므로 count에 저장
	// 나눈 나머지는 T에 다시 대입하며 반복

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		count[i] = T / arr[i];
		T = T % arr[i];
	}

	if (T == 0)
		printf("%d %d %d\n", count[0], count[1], count[2]);
	else
		printf("-1");

	return 0;
}