#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void * b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int count;
	scanf("%d", &count);
	int arr[count];

	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), compare);

	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}