#include <stdio.h>

int main()
{
	int operands, remain[10], result = 0;;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &operands);
		if (0 <= operands && operands <= 1000)
		{	
			remain[i] = operands % 42;
		}
		else
			return 0;
	}
	// 1 1 1 1 1 /  1 1 1 1 2
	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		for (int j = i + 1; j < 10; j++)
		{
			if (remain[i] == remain[j])
				count++;
		}
		if (count == 0)
			result++;
	}
	printf("%d\n", result);
	return 0;
}