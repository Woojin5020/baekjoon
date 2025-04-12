#include <stdio.h>

int main(void)
{
	int test_case;
	int num1[100] = { 0 };
	int num2[100] = { 0 };
	scanf("%d", &test_case);

	for (int i = 0; i < test_case; i++)
	{
		scanf("%d %d", &num1[i], &num2[i]);
	}
	for (int i = 0; i < test_case; i++)
	{
		printf("%d\n", num1[i] + num2[i]);
	}
	return 0;
}