#include <stdio.h>
#include <string.h>

int main()
{
	int T;
	
	scanf("%d", &T);
	if (1 <= T && T <= 1000)
	{
		int R;
		
		for (int i = 0; i < T; i++)
		{
			scanf("%d", &R);
			if (1 <= R && R <= 8)
			{
				char S[20];
				scanf("%s", &S);
				// (S의 길이 x R)만큼 반복하면서 각 자리마다 R번 반복
				for (int j = 0; j < strlen(S); j++)
					for (int k = 0; k < R; k++)
						printf("%c", S[j]);
				printf("\n");
			}
		}
	}
	return 0;
}