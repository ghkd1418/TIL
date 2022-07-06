#include <stdio.h>
int main()
{
	int w, m, k;
	scanf("%d %d %d", &w, &m, &k);

	while(k != 0)
	{
		if (w >= 2*m)
		{
			w = w-1;
			k --;
		}
		else
		{
			m = m-1;
			k--;
		}
	}
	int count = 0;
	while(w != 0 && m != 0)
	{
		w = w-2;
		m = m-1;
		if (w >= 0 && m >= 0)
		{
			count++;
		}
		
	}
	printf("%d\n", count);

	return 0;
}