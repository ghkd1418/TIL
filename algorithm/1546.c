#include <stdio.h>
int main()
{
	int N, M = 0;
	
	scanf("%d", &N);
	
	int score[N];
	
	if (0 <= N && N <= 1000)
	{
		for (int i = 0; i < N; i++)
		{	
			scanf("%d", &score[i]);
			if (M <= score[i])
				M = score[i];
		}
	}
	
	double avg;
	for (int i = 0; i < N; i++)
	{
		avg += score[i] / M * 100;
	}
	printf("%lf\n", avg / N);
	return 0;
}