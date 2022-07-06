#include <stdio.h>
#include <string.h>
int main()
{
	int size;
	char arr[81];
	
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
	{
		int result = 0;
		int count = 0;
		scanf("%s", arr);
		for (int i = 0; i < strlen(arr); i++)
		{	
			if (arr[i] == 'O')
			{
				count ++;
				result += count;
			}
			else
			{
				count = 0;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}