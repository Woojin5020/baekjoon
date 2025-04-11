#include <stdio.h>

int main(void)
{
	int h, m;
	int num = 45;
	scanf("%d %d", &h, &m);

	if ((0 <= h && h <= 23) & (0 <= m && m <= 59))
	{
		int result = 60 * h + m - num;
		if (result < 0)
		{
			result += 1440;
		}
		int hour = result / 60;
		int minute = result - hour * 60;
		
		printf("%d %d", hour, minute);
	}
	return 0;
}