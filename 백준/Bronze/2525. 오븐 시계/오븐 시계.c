#include <stdio.h>

int main(void)
{
	int h, m,c;
	scanf("%d %d", &h, &m);
	scanf("%d", &c);
	int end_time;
	// h m 현재 시간 -> 시 분
	// c 요리하는데 필요한 시간 -> 분
	if ((0 <= h && h <= 23) && (0 <= m && m <= 59) && (0 <= c && c <= 1000))
	{
		int total_time = h * 60 + m + c;
		int end_hour = total_time / 60;
		int end_minute = total_time % 60;
		if (total_time >= 1440)
		{
			total_time %= 1440;
			end_hour = total_time / 60;
			end_minute = total_time % 60;
		}
		printf("%d %d", end_hour, end_minute);
	}
	return 0;
}