#include <stdio.h>
int main()
{
	int count, max_weight, result = 0, weight;
	scanf("%d %d", &count, &max_weight);

	if (max_weight == 0)
	{
		printf("0");
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &weight);
		if (weight + sum > max_weight)
		{
			sum = weight;
			result++;
		}
		else
			sum += weight;
	}
	if (sum)
		result++;
	printf("%d\n", result);

	return 0;
}