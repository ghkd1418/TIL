#include <stdio.h>
int main()
{
	int piece, min, choco = 1, cleave = 0;
	scanf("%d", &piece);

	while(choco < piece)
		choco *= 2;
	min = choco;
	if (min == piece)
	{
		printf("%d 0", min); 
		return 0;
	}

	while (piece%min != 0)
	{
		min = min /2;
		cleave++;
	}
	printf("%d %d", choco, cleave);
	return 0;
}
                                                                  