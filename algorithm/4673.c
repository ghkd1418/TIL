#include <stdio.h>

int mine(int n)
{
	int temp = n;	

	while(n > 0)
	{
		temp += n % 10;
		n /= 10;
	}
	return temp;
}

int main()
{
	int arr[10001], i, check;
	for (i = 1; i < 10001; i++)
	{
		check = mine(i);
		if (check < 10001)
			arr[check] = 1;		
	}
	for (i = 1; i < 10001; i++)
	{
		if (arr[i] != 1)
			printf("%d\n", i);			
	}
	return 0;
}