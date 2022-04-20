#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (int k = i - 1; k < count*2 -i; k++)
		{
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}

