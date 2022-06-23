#include <stdio.h>
int main()
{
	int n, comp[42] ={0,}, count = 0;

	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &n);
		comp[n%42] = 1;
	}
	
	for (int i = 0; i < 42; ++i)
	{
		count += comp[i];
	}
	printf("%d\n", count);
	return 0;
}