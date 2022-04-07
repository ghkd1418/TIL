#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		for (int j = i; j < count; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}