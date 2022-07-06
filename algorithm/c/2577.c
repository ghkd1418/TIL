#include <stdio.h>
int main()
{
	int a, b, c, total;
	scanf("%d %d %d", &a, &b, &c);
	
	if (100 <= a && a <= 1000 && 100 <= b && b <= 1000 && 100 <= c && c <= 1000 )
	{
		total = a * b * c;
		
		int arr[10] = {0, };

		int length = 0;
		// printf("%d\n", total);
		int temp = total;
		while(temp)
		{
			temp /= 10;
			++length;
		}
		// printf("%d\n", length);
		int num = 1;
		for (int i = 1; i < length; i++)
		{
			num *= 10;
		}
		int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;
		
		for (int i = 0; i < length; i++)	//배열에 담기
		{
			arr[i] = total / num;
			// printf("%d\n", arr[i]);
			total = total % num;
			num = num / 10;

			if (arr[i] == 0)	// arr[i]를 출력하는데 무슨숫자가 몇개있는지 출력
			{
				++num0;
			}
			if (arr[i] == 1)
			{
				++num1;
			}
			if (arr[i] == 2)
			{
				++num2;
			}
			if (arr[i] == 3)
			{
				++num3;
			}
			if (arr[i] == 4)
			{
				++num4;
			}
			if (arr[i] == 5)
			{
				++num5;
			}
			if (arr[i] == 6)
			{
				++num6;
			}
			if (arr[i] == 7)
			{
				++num7;
			}
			if (arr[i] == 8)
			{
				++num8;
			}
			if (arr[i] == 9)
			{
				++num9;
			}
		}
		printf("%d\n", num0);
		printf("%d\n", num1);
		printf("%d\n", num2);
		printf("%d\n", num3);
		printf("%d\n", num4);
		printf("%d\n", num5);
		printf("%d\n", num6);
		printf("%d\n", num7);
		printf("%d\n", num8);
		printf("%d\n", num9);
	}
	return 0;
}
