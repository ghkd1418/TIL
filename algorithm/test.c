#include <stdio.h>
int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 111};

	for (int i = 0; i < 11; ++i)
	{
		printf("i = %d => %d\n", i, arr[i]);
	}
	return 0;
}