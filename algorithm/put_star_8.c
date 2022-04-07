#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (int k = 1; k <= count*2 - 2*i; k++)
		{
			printf(" ");	
		}
		for (int m = 0; m < i; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= count-1; ++i)
	{
		for (int j = i; j < count; j++)
		{
			printf("*");
		}
		for (int k = 1; k <= 2*i; k++)
		{
			printf(" ");	
		}
		for (int m = i; m < count; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

