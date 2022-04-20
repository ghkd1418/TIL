#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int main()
{
	int count, max;
	scanf("%d", &count);
	int arr[count];
	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), compare);

	for (int i = 0; i < count; ++i)
	{
		if (max < arr[i] * (i+1))
			max = arr[i] * (i+1);
	}
	printf("%d", max);

	return 0;
}