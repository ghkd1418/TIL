#include <stdio.h>
int main()
{
	int arr[9], max = 0;


	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] < 100)
		{
			if (max < arr[i])
			{
				max = arr[i];
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] == max)
		{
			printf("%d %d", max, i + 1);
		}
	}
	return 0;
}
