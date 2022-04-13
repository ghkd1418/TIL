#include <stdio.h>
int main()
{
	int coin[] = {500, 100, 50, 10, 5, 1};
	int pay, count = 0;

	scanf("%d", &pay);
	pay = 1000-pay;
	for (int i = 0; i < sizeof(coin) / sizeof(int); i++)
	{
		count += pay / coin[i];
		pay = pay % coin[i];	
	}
	printf("%d\n", count);
	return 0;
}