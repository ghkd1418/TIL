#include <stdio.h>
int main()
{
	int count, pay, min_coin = 0;
	scanf("%d %d", &count, &pay);

	int coin_arr[count];
	

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &coin_arr[i]);
	}
	for (int i = count -1; i >= 0; i--)
	{
		min_coin += pay / coin_arr[i];
		pay = pay % coin_arr[i];

	}
	printf("%d\n", min_coin);
	
	return 0;
}