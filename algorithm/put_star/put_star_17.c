#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	// 첫 번쨰 줄
	for (int i = 0; i < count-1; i++)
	{
		printf(" ");
	}
	printf("*\n");
	
	// 사이 줄
	for (int i = 1; i < count-1; i++)	// 첫줄과 마지막줄 제외 반복
	{
		for (int j = i; j < count-1; j++)
		{
			printf(" ");	// 외부 공백	
		}
		printf("*");
		for (int k = 0; k < i*2-1; k++)
		{
			printf(" ");	// 내부공백
		}
		printf("*\n");
	}

	//마지막 줄
	if (count != 1)
	{
		for (int i = 0; i < count*2-1; i++)
		{
			printf("*");
		}
	}

	return 0;
}
