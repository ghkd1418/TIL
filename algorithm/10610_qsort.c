#include <stdio.h>
#include <stdlib.h>

int check_multiples_of_3(char *arr)
{
	int sum = 0;

	for (int i = 0; arr[i]; ++i)
	{
		sum += arr[i] - '0';
	}
	if (sum % 3 != 0 || sum == 0)
	{
		printf("3의배수가 아닙니다.");
		return 0;
	}
}

int find_zero(char *arr){
	for (int i = 0; arr[i]; ++i)
	{
		if (arr[i] == '0')
		{
			check_multiples_of_3(arr);
			return 1;
		}
	}
	printf("0이 없습니다.");
	return 0;
}

int compare(const void* a, const void* b) {
	return *(int *)b - *(int *)a;
}

int main()
{
	// 각 자리의 숫자 합이 3의 배수
	char arr[100001];
	int result;

	scanf("%s", arr);

	if(find_zero(arr))
	{
		printf("qsort실행");
		qsort(arr, sizeof(arr)/sizeof(char), sizeof(char), compare);
	}
	printf("%s", arr);
	return 0;
}