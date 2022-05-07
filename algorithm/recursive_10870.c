#include <stdio.h>

int fibonacci(int n){
	if (n == 0)
		return n;
	if (n == 1)
		return n;
	
	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; ++i)
	{
		printf("%d\n", fibonacci(num));
	}
	
	return 0;
}