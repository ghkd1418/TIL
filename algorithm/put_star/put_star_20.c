#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < count; j++)
			{
				printf("* ");	//홀수 줄
			}
			printf("\n");
		}
		else
		{
			for (int k = 0; k < count; k++)
			{
				printf(" *");	//짝수줄
			}
			printf("\n");
		}	
	}
	return 0;
}