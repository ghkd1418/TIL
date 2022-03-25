#include <stdio.h>

int main(){
	int hour, min, time;
	
	scanf("%d %d", &hour, &min);
	scanf("%d", &time);
	if (0 <= hour && hour <= 23 && 0 <= min && min <= 59 && 0 <= time && time <= 1000)
	{
		hour += time/60;	
		min += time%60;		
		hour += min/60;		
		if (hour == 24)
			hour = 0;	
		if (hour > 24)
			hour = hour % 24;
		if (min >= 60)
			min = min - 60;	
		printf("%d %d", hour, min);
	}
	return 0;
}
