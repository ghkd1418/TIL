#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		for (int j = i; j < count; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i; k++)
		{
			printf("* ");
		}
		printf("\n");	
	}

	return 0;
}