#include <stdio.h>
int main()
{
	int sugar, count = 0;
	scanf("%d", &sugar);

	while(sugar > 0)
	{
		if (sugar % 5 == 0)
		{
			sugar -= 5;
			count++;
		}
		else if (sugar % 3 == 0)
		{
			sugar -= 3;
			count++;
		}
		else if (sugar > 5)
		{
			sugar -= 5;
			count++;
		}
		else
		{
			count = -1;
			break;
		}
	}
	printf("%d\n", count);
	
	return 0;
}