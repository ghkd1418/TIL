#include <stdio.h>
#include <string.h>

int main()
{
	char input[51];
	int arr[25] = {0, };
	scanf("%s", input);

	int num = 0, sum = 0, j = 0, result;
	int len = strlen(input);
	for (int i = 0; i <= len; ++i)
	{
		if (input[i] == '-' || i == len)
		{
			sum = sum + num;
			arr[j] = sum;
			j++;
			num = 0;
			sum = 0;

		}
		else if (input[i] == '+')
		{
			sum = sum + num;
			num = 0;
		}
		else
		{			
			num = num*10 + (input[i] - '0'); // 문자를 숫자로 바꾸기
		}
	}
	result = arr[0];
	for (int i = 1; i < j; i++)
	{
		result = result - arr[i];
	}
	printf("%d",result);
	return 0;
}