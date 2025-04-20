#include <stdio.h>
#include <stdlib.h>

int swap(int*, int*);

int main(void)
{
	int n, m;
	int num1, num2;
	scanf("%d %d", &n, &m);
	int* b = (int*)malloc(sizeof(int) * n);
	if (b == NULL) exit(1);

	for (int i = 0; i < n; i++)
	{
		*(b + i) = i+1;
		//printf("%d번째 바구니에 들어 있는 공 : %d \n", i+1, *(b + i));
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &num1, &num2);
		swap((b + num1 - 1), (b + num2 - 1));
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(b + i));
	}
	free(b);
	return 0;
}

int swap(int* num1, int* num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}