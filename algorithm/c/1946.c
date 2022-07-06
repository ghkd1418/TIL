#include <stdio.h>
int main()
{
	// 서류 면접 둘 다 다른 지원자에 비해 낮으면 제외
	int test_case, count;

	scanf("%d", test_case);
	
	for (int i = 0; i < test_case; ++i)
	{
		scanf("%d", count);
		int ranking_doc[count], ranking_interview[count]
		for (int i = 0; i < count; ++i)
		{	
			scanf("%d %d", ranking_doc[i], ranking_interview[i]);
		}
		for (int i = 0; i < count; ++i)
		{	
			scanf("%d %d", ranking_doc[i], ranking_interview[i]);
		}
	}
	int temp;
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count-1; ++j)
		{
			if (i > j)
			{
				temp = ranking_doc[i];
				ranking_doc[i] = ranking_doc[i];
				ranking_doc[i] = temp;
			}
		}
	}
	for (int i = 0; i < count; ++i)
	{	
		printf("%d\n", ranking_doc[i]);
	}

	return 0;
}
// 각 순위별로 정렬하고
// 배열로 묶은 후 
// 두 순위가 모두 다른 사람보다 낮으면 제외

// 2
// 5
// 3 2
// 1 4
// 4 1
// 2 3
// 5 5	 제외
// result= 4

// 7
// a 3 6  제외
// b 7 3	제외
// c 4 2
// d 1 4
// e 5 7	제외
// f 2 5	제외
// g 6 1
// result = 3

// 서류 	 면접
// d 	 g
// f     c
// a     b
// c     d
// e     f
// g     a
// b     e

// e 제외 b 제외 a 제외 f 제외 