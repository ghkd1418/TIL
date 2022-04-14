#include <stdio.h>
int main()
{
	int count, temp;
	scanf("%d", &count);
	int arr[count];

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < count; j++) 
	{
		for (int k = 0; k < count-1; k++)
		{
			if (arr[j] < arr[k])	
			{										
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		result += arr[i] * (count-i);
	}
	printf("%d", result);

	return 0;
}

// 제일 작은것부터 count 만큼 곱하면서 for문 돌리기
	// 1 x 5 = 5
	// 2 x 4 = 8
	// 3 x 3 = 9
	// 3 x 2 = 6
	// 4 x 1 = 4