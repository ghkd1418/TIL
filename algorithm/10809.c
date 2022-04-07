#include <stdio.h>

int main()
{
	char S[101];
	
	scanf("%s", S);
	for (int i = 'a'; i <= 'z'; i++)
	{
		int count = 0;
		for (int j = 0; S[j]; j++)
		{
			if (S[j] == i)
			{
				printf("%d ", j);
				count++;
				break;
			}
		}
		if (count ==  0) printf("-1 ");
	}
	return 0;
}
