#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		for (int k = 0; k < count-i-1; k++)
		{
			printf(" ");
		}
		for (int l = 0; l < i+1; l++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
