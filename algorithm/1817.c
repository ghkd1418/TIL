#include <stdio.h>
int main()
{
	int count, max_weight;
	scanf("%d %d", &count, &max_weight);
	int weight[count];
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &weight[i]);
	}
	int sum = 0, result = 0;
	for (int i = 0; i < count; ++i)
	{
		
		sum += weight[i];
		if (sum == max_weight)
		{
			result++;
			sum = 0;
		}
		else if ( sum > max_weight)
		{
			result++;
			sum = 0;
			i--;
		}
	}
	if(weight)
		result++;
	printf("%d\n", result);

	return 0;
}