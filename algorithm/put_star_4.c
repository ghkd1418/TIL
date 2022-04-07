#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
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