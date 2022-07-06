#include <stdio.h>
#include <stdlib.h>

int compare_a(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int compare_b(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int main()
{	
	// a만 정렬하여 최솟값맞추기
	// a는 오름차순 정렬 b는 내림차순 정렬하여 출력
	int n, result = 0;
	scanf("%d", &n);
	int a[n], b[n];

	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; ++i)
		scanf("%d", &b[i]);

	qsort(a, n, sizeof(int), compare_a);
	qsort(b, n, sizeof(int), compare_b);

	for (int i = 0; i < n; ++i)
	{
		result += a[i] * b[i];
	}
	printf("%d\n", result);
	
	return 0;
}