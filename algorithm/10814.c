#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int age;
	char name[101];
}member;

int compare(const void *a, const void *b)
{
	member A = *(member *)a;
	member B = *(member *)b;

	if (A.age > B.age)
		return 1;
	return -1;
}

int main()
{
	int n;
	scanf("%d", &n);
	member *m;
	m = (member *)malloc(sizeof(member) * n);
	for (int i = 0; i < n; ++i)
		scanf("%d %s", &m[i].age, m[i].name);		

	qsort(m, n, sizeof(member), compare);
	for (int i = 0; i < n; ++i)
		printf("%d %s\n", m[i].age, m[i].name);
	free(m);

	return 0;
}