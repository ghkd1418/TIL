#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);
	// 첫 줄
	for (int i = 1; i < count; ++i)
	{
		printf(" ");
	}
	printf("*\n");
	// 사이 줄
	for (int i = 2; i < count; i++)	// i =2로 초기화함으로써, 2이하일 시 실행X 
	{
		for (int j = i; j < count; j++)
		{
			printf(" ");	//외부공백
		}
		printf("*");
		for (int k = 2; k < i*2-1; k++)
		{
			printf(" ");	//내부공백 1 3 5 7 ~~~
		}
		printf("*\n");	
	}
	// 마지막 줄		count 가 1일때 실행 x
	if (count != 1)
	{
		for (int l = 0; l < count*2-1; l++)
		{
			printf("*");
		}
	}

	return 0;
}