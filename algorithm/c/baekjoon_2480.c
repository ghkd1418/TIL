#include <stdio.h>
int main()
{
	// 숫자 3개가 같으면 10000 + 같은눈 x 1000 
	// 모두 다른 눈이면 가장 큰 눈 x 100
	int i, j, k, max, reward;
	scanf("%d %d %d", &i, &j, &k);
	if (i == j && j == k && 1 <= i && i <= 6) 	
	{
		reward = 10000 + (i * 1000);
		printf("%d\n", reward);
	}
	if ((i == j || i == k || j == k ) 
		&& (1 <= i && i <=6) && (1 <= j && j <=6))
	{
		// 숫자 2개만 같으면 1000 + 같은 눈 x 100
		if (i == j && i != k)
		{
			reward = 1000 + (i * 100);
			printf("%d\n", reward);	
		}
		else if (i == k && i != j)
		{
			reward = 1000 + (i * 100);
			printf("%d\n", reward);	
		}
		else if (j == k && i != j)
		{
			reward = 1000 + (j * 100);
			printf("%d\n", reward);	
		}
	}
	if (i != j && j != k && i != k && 1 <= i && i <=6
		&& 1 <= j && j <=6 && 1 <= k && k <=6)
	{
		 if (i > j && i > k)
		 {
		 	max = i;
			reward = max * 100;
			printf("%d\n", reward);	
		 }
		 else if (j > i && j > k)
		 {
		 	max = j;
			reward = max * 100;
			printf("%d\n", reward);	
		 }
		 else if (k > j && k > i)
		 {
		 	max = k;
			reward = max * 100;
			printf("%d\n", reward);	
		 }
	}
	return 0;
}