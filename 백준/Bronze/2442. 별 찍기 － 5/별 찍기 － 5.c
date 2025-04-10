#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	int b = 0;

	for (int i = N; i > 0; i--)
	{
		int a = 1 + 2 * b;
		for (int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < a; k++)
		{
			printf("*");
		}
		b++;
		printf("\n");
	}
	return 0;
}