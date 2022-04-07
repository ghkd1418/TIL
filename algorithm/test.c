#include <stdio.h>
int main()
{
	int a = 5;
	
	printf("%d\n", a++);
	printf("%d\n", a);
	int b = 5;
	for (int b = 0; b < 6; ++b)
	{
		printf("%d", b);
	}
	printf("%d\n", b);

	return 0;
}