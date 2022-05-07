#include <stdio.h>
int main()
{
	// 6팩과 1팩중 각각 싼걸로 min값 갱신
	// 1팩 x 6 값과 6팩의 가격을 비교 후 
	// 1팩으로 살때가 작으면 1팩으로 끊어진 기타 줄 만큼 구매
	// 6팩이 더 작고 남은건 1팩으로 샀을 떄 유리할 때와
	// 6팩이 더 작고 남은게 1팩으로 샀을 떄까 더 비싸면 6팩을 하나 더 구매
	// 작은경우 6으로 나눈 나머지에 one을 곱한게 큰지 six를 하나 더한게 큰지

	int blocken_string, count, six_min, one_min, result, six_pack_price = 1000, one_pack_price = 1000;
	scanf("%d %d", &blocken_string, &count);

	for (int i = 0; i < count; ++i)
	{
		scanf("%d %d", &six_pack_price, &one_pack_price);
		if (six_pack_price < six_min) six_min = six_pack_price;
		if (one_pack_price < one_min) one_min = one_pack_price;
	}
	if (one_min * 6 <= six_min)
	{
		result = blocken_string * one_min;
		printf("%d\n", result);
	}
	else
	{
		result = (blocken_string / 6) * six_min;
		if (blocken_string % 6 * one_min <= six_min)
		 	result += (blocken_string % 6) * one_min;
		else
		 	result += six_min;
		printf("%d", result);
	}

	return 0;
}