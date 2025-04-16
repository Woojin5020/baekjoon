#include <stdio.h>

int main(void)
{
	int num[100] = { 0 };
	int count = 0;
	int max = 0, max_index = 0;

	while (count != 9)
	{
		scanf("%d", (num+count));
		if (count == 0)
		{
			max = *(num + count);
			max_index = count;
		}
		else if (count > 0)
		{
			if (*(num + count) > max)
			{
				max = *(num + count);
				max_index = count;
			}
		}
		count++;
	}
	printf("%d\n", max);
	printf("%d\n", max_index+1);

	return 0;
}