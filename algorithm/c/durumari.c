#include <stdio.h>
#include <string.h>

int main()
{
	int len;
	scanf("%d", &len);
	
	char a[len];
	char b[len];
	char del_aeiou[5];

	for (int i = 0; i < len; ++i)
	{
		scanf("%c", &a[i]);
	}
	for (int i = 0; i < len; ++i)
	{
		scanf("%c", &b[i]);
	}
	int j= 0;
	for (int i = 0; i <= len; ++i)
	{
		if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
			continue;	
		printf("%d", j);
		del_aeiou[j++] = b[i];
	}
	char *compoare_a = "drmr";
	for (int i = 0; del_aeiou[i]; ++i)
	{
		printf("%c", del_aeiou[i]);
	}
	printf("%s\n", del_aeiou);
	int count = strcmp(del_aeiou, compoare_a);
	printf("%d\n", count);
	if (a[0]==b[0] && a[len] == b[len])
		count++;
	printf("%d\n", count);	
	int r = strcmp(a, b);
	if (r != 0) count++;
	printf("%d\n", count);
	if (count == 2) printf("YES");
	else printf("NO");

	return 0;
}
