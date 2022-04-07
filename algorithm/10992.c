#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < n-i-1; j++)
			printf("");
		printf("*");
	}
	return 0;
}

