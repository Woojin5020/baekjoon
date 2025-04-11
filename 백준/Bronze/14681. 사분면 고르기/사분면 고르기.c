#include <stdio.h>

int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	if (num1 > 0) // x가 양수이므로 1 또는 4사분면
	{
		if (num2 > 0)
		{
			printf("%d", 1);
		}
		else if(num2 < 0)
		{
			printf("%d", 4);
		}
	}
	else if (num1 < 0) // x가 음수이므로 2 또는 3사분면
	{
		if (num2 > 0)
		{
			printf("%d", 2);
		}
		else if (num2 < 0)
		{
			printf("%d", 3);
		}
	}
	return 0;
}