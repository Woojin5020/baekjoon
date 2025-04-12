#include <stdio.h>

int main(void)
{
	int n, value=0;
	scanf("%d", &n);

	if (1 <= n && n <= 10000)
	{
		for (int i = 1; i <= n; i++)
		{
			value += i;
		}
	}
	printf("%d", value);
	return 0;
}