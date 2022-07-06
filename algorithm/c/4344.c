#include <stdio.h>
int main()
{
	int C;

	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		int N, sum = 0;
		double avg;
		scanf("%d",  &N);
		int arr[N];
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		avg = (double)sum/N;
		double result;
		int count = 0;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > avg)
				count++;
		}
		result = (double)count / N;		// 계산시 자료형을 맞춰주지 않으면 결과가 제대로 나오지 않음...!
		printf("%.3lf%%\n", result * 100);
	}
	return 0;
}