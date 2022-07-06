#include <stdio.h>

int main()
{
	char str[1000000];
	scanf("%s", str);
	int one = 0, zero = 0;

	for (int i = 1; str[i]; ++i)
	{
		if (str[i-1] == '0' && str[i] == '1') one++;
		else if (str[i-1] == '1' && str[i] == '0') zero++;
	}
	int min = zero < one ? one : zero;
	printf("%d", min);

	return 0;
}