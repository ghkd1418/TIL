#include <stdio.h>
int main()
{
	// 서로 다른 수의 자연수의 합이 N이 되어야 하고, 그 개수의 최댓값을 구해야 합니다.
	long long int S, i, n=0;
	int cnt=0;
	scanf("%lld", &S);

	for(i=1; ; i++) {
		n += i;
		cnt++;
		if(n > S) 
		{
			cnt--;
			break;
		}
	}
	printf("%d\n", cnt);

	return 0;

}



출처: https://jwprogramming.tistory.com/44 [개발자를 꿈꾸는 프로그래머]
}

// 200 = 1~18, 29  >> 19
// 50 = 1~8, 14 >> 9
// 50 - 36 = 14

	

// 36 = 1~8 >> 8
// 37 = 1~7, 9 >> 8

// 11 = 1~3 , 5  >> 4
// 	11 -1 = 10
// 	10 - 2 = 8
// 	8 - 3 = 5

// 	5 - 4 = 1 >> x
//  	5 - 5 = 0 >> o

// 반례 1
// 아웃풋 2
// 원래 나와야 하는 값 1


