#include <stdio.h>

int seq(int n){
	// 백의자리수 - 십의자리수 == 십의자리수 - 일의자리수 같으면 count++
	// 1~ 99 까지는 모두 카운트
	int units, tens, hundreds, count = 0;
	for (int i = 1; i < n+1; i++)
	{
		if (i < 100)
			count++;
		else if (i < 1000)
		{
			units = i % 10;
			tens = (i / 10) % 10;
			hundreds = i / 100;
			if (hundreds - tens == tens - units)
				count++;
		}
	}
	return count;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d\n", seq(N));
	return 0;
}

