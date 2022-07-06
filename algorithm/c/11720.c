#include <stdio.h>
int main()
{
	int 	count,sum = 0;
	char 	num;

	scanf("%d", &count);
	getchar();
	if (1 <= count && count <= 100)
	{
		for (int i = 0; i < count; i++)
		{
			scanf("%c", &num);
			sum += num - 48;
		}
		printf("%d\n", sum);
	}
	return 0;
}