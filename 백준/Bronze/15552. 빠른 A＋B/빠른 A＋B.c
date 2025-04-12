#include <stdio.h>

int main(void)
{
	int count;
	scanf("%d", &count);
	int num1, num2;

	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &num1, &num2);
        printf("%d\n", num1 + num2);
	}
	return 0;
}