#include<stdio.h>
	
struct time
{
	int start;
	int finish;
};
	
int main()
{
	int count, result = 0;
	scanf("%d", &count);
	struct time t[count];
	
	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &t[i].start, &t[i].finish);
	}
	for (int i = 0; i < count; i++)
	{
		printf("%d %d\n", t[i].start, t[i].finish);
	}
	// 또한 최대한 많은 회의를 돌려야하므로, 회의 시간은 짧은게 최우선
	// start != finish && 다음시작시간은 현재 끝시간보다 커야하며 차이는 최소
	//if (finish[i] 와 start[i+1]의 차이를 비교하여 차이가 제일 작은 것
	
	// for (int i = 0; i < count; ++i)
	// {
	// 	interval[i] = finish[i] - start[i]; 
	// }
	// int temp; 
	// for (int i = 0; i < count; ++i)
	// {
	// 	for (int j = 0; j < count; ++j)
	// 	{
	// 		if (j > j+1)
	// 		{
	// 			temp = j;
	// 			j = j+1;
	// 			j+1 = temp;
	// 		}
	// 	}
	// }
	return 0;
}