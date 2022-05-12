#include <stdio.h>
int main()
{
	int count;
	scanf("%d", count);
	int arr[count], max;

	for (int i = 0; i < count; ++i)
	{
		if (arr[i] > arr[i+1])
		{
			max = arr[i];
		}
	}
	return 0;
}