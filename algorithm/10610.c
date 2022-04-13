#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) 
{
	const char* n1 = (const char*)a;
	const char* n2 = (const char*)b;
	
	if (*n1 > *n2)
		return -1;
	else if (*n1 == *n2) 
		return 0;
	else 
		return 1;
}

int main()
{
	char N[100001]; 
	scanf("%s", N);
	int sum = 0;
	// 1. 0이 있어야함 
	// 2. 각 자리의 수의 합이 3의 배수
	// 3. 충족 시 내림차순 정렬 
	
	// 문자열에 0이 없거나 문자열의 시작이 0이라면 -1을 출력하고 종료
	if (strchr(N, '0') == NULL || N[0] == '0') {
		printf("-1");
		return 0;
	}

	int i = 0;
	while(N[i])
		sum += N[i++] - '0';	// 문자를 숫자로 변경
	
		if (sum % 3 != 0 || sum == 0) {
		printf("-1");
		return 0;
	}
	else {
		qsort(N, sizeof(N)-1, sizeof(char), compare);
	}
	printf("%s", N);
	return 0;
}