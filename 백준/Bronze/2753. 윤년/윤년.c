#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)) {
			printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}
	return 0;
}