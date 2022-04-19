#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	// 첫 줄 
	for (int i = 0; i < N-1; i++)
	{
		printf(" ");
	}
	printf("*\n");

	// 사이 줄
	for (int i = 2; i < N; i++)
	{
		for (int j = i; j < N; ++j)
		{
			printf(" ");
		}			
		printf("*");
		for (int k = 2; k < i*2-1; k++)
		{
			printf(" ");
		}
		printf("*\n");
	}		
	//마지막 줄
	if (N != 1)
	{
		for (int i = 0; i < N*2-1; i++)
		{
			printf("*");
		}
	}

	return 0;
}