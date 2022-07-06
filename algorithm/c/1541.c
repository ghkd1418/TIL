#include <stdio.h>
int main()
{
	// -가 나오기 전까지 계산
	char input[51];
	int atoi[6];	// 문자를 숫자로 바꿔줌
	scanf("%s", input);

	int i=0;
	int num  = 0; 
		// !! 연산자가 없으면 무한루프
	while(input[i] != '+' && input[i] != '-')
	{
		input[i] -= '0';	// 문자를 숫자로
		atoi[i] = input[i];
		i++;
	}
	for (int j = 0; j < i; ++j)
	{
	 	int x = 1; // x 초기화
		for (int k = 1; k < i-j; k++)
		{
			x *= 10;
		}
		// atoi 를 한번 채우면 다음 수가 들어올 수 있게 초기화를 시켜줘야함
		atoi[j] *= x; 
		num += atoi[j];
	}
	printf("%d\n", num);
	return 0;
}