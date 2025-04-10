#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int a = N;
		for (int j = 0; j < i; j++)
		{
			printf(" ");
			a--;
		}
		for (int k = 0; k < a; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}