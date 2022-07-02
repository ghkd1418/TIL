#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int x;
	int y;
}point;

int compare(const void *a, const void* b){
	point A = *(point *)a;
	point B = *(point *)b;

	if (A.y > B.y)
		return 1;
	else if (A.y == B.y)
	{
		if (A.x > B.x)
		{
			return 1;
		}
		else
			return -1;
	}
	return -1;
}

int main()
{
	int n;
	scanf("%d", &n);
	point *p1;
	p1 = (point *)malloc(sizeof(point) * n);
	for (int i = 0; i < n; ++i)
		scanf("%d %d", &p1[i].x, &p1[i].y);

	qsort(p1, n, sizeof(point), compare);
	
	for (int i = 0; i < n; ++i)
		printf("%d %d\n", p1[i].x, p1[i].y);	
	free(p1);

	return 0;
}