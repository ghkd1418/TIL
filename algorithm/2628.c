#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{
	int w, h, count, rowOrcol;
	scanf("%d %d", &w, &h);
	scanf("%d", &count);
	int row[100];
	int col[100];

	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &rowOrcol);
		if (rowOrcol == 0) scanf("%d", &row[i]);
		else scanf("%d", &col[i]);
	}
	qsort(row, sizeof(row)/sizeof(int), sizeof(int), compare);
	qsort(col, sizeof(col)/sizeof(int), sizeof(int), compare);

	for (int i = 0; i < sizeof(row)/sizeof(int); ++i)
	{
		printf("%d ", row[i]);
	}
	printf("\n");
	for (int i = 0; i < sizeof(col)/sizeof(int); ++i)
	{
		printf("%d ", col[i]);
	}

	return 0;
}

