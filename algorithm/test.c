#include <stdio.h>
#include <stdlib.h>

int length(char *str)
{
	int count = 0;
	for (int i = 0; str[i]; ++i)
		count++;
	return count;
}

int main()
{
	char *a;
	a = malloc(sizeof(char));
	a = "dd";
	printf("%d\n", length);

	a = realloc(a, sizeof(char));
	a = "dfddfaf";
	printf("%d\n", length);
	return 0;
}

 
