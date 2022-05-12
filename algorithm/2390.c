#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return	*(int *)a - *(int *)b;
}

int main()
{
	int height[9], sum = 0, except = 0, remainder;
	for (int i = 0; i < 9; ++i)
	{
		scanf("%d", &height[i]); 
		sum += height[i];
	}
	remainder = sum - 100;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 1; j < 9; ++j)
		{
			if (height[i] + height[j] == remainder)
			{
				height[i] = 0;
				height[j] = 0;
				i = 10;			// 이중 for 문 탈출
				break;
			}
		}
	}
	qsort(height, sizeof(height)/sizeof(int), sizeof(int), compare);

	for (int i = 2; i < 9; ++i)
	{
		printf("%d\n", height[i]);
	}

	return 0;
}

// 전체 더한값에서 100을 빼고 나머지 값이나오면
// 9개  중 2개를 더한 값이 그 나머지값이 나온다면 제외