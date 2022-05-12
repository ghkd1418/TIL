#include <stdio.h>
int main()
{
	int count, head, deputy;
	long long result = 0;
	scanf("%d", &count);
	int people[count];

	for (int i = 0; i < count; ++i)
	{
		scanf("%d", &people[i]);
	}
	scanf("%d %d", &head, &deputy);
	for (int i = 0; i < count; ++i)
	{
		if (people[i] > 0)
		{
			result += 1;
			people[i] -= head;
		}
		if (people[i] < 0)
			people[i] = 0;
		result += people[i]/deputy;
		if (people[i]%deputy > 0)
			result+=1;
	}
	printf("%lld\n", result);
	return 0;
}

// people 에서 head를 뺸 나머지를 
// 1. depty로 0과 같거나 이하가 될때까지 뺸다.
// 2. depty로 나누고  나머지가 있다면 1을더해준다

// people에서 head를 뺸게 음수가 되거나 
// people이 0이라면 result에 count가 들어가지 않아야한다
// people 이 0보다 크다면 result에 수만큼 count수만큼 더해준다