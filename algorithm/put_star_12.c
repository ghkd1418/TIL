#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		for (int j = count-i; j > 0; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < i; k++)
		{
			printf("*");	
		}
		printf("\n");
	}
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = count; k > i; k--)
		{
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}

