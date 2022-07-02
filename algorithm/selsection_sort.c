#include <stdio.h>

#define len sizeof(arr)/sizeof(int)

int main()
{
	int min, arr[] = {7, 2, 6, 8, 3, 5}, temp;

	for (int i = 0; i < len; ++i)
	{
		min = arr[i];
		for (int j = i; j < len; ++j)
		{
			if (min > arr[j])
			{
				min = arr[j];
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;	
			}
		}
	}

	for (int i = 0; i < len; ++i)
		printf("%d\n", arr[i]);

	return 0;
}