#include <stdio.h>
int main()
{
	// 경우의수 조합 - eCw
	// e! / w! * (e-w)!
	// e >= w
	int t, e, w;
	scanf("%d", &t);
	
	for (int i = 0; i < t; ++i)
	{
		int result = 1;
		scanf("%d %d", &w, &e);
		for (int j = 0; j < w; ++j)
		{
			result *= e-j;
			result /= 1+j;
		}
		printf("%d\n", result);
	}

	return 0;
}