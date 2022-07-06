#include <stdio.h>
int main()
{
	int a, b, c;
	int arr[10] = {0, };
	scanf("%d %d %d", &a, &b, &c);
	int abc = a * b* c;
	if (100 <= a && a <= 1000 && 100 <= b && b <= 1000 && 100 <= c && c <= 1000 )
	{
		int i = 0;
		while(abc > 0)
		{
			++arr[abc%10];	
			abc = abc / 10;
		}
		for (int i = 0; i < 10; ++i)
			printf("%d\n", arr[i]);
	}
}