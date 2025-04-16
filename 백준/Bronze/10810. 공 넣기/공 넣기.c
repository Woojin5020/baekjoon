#include <stdio.h>

int main(void)
{

	int n = 0, m = 0; // n개의 바구니 // m번 까지의 공
	int i = 0, j = 0, k=0;
	int count = 0;

	scanf("%d %d", &n, &m);
	int ary[100] = { 0 }; // 바구니 개수 최대 100개

	while (count != m)
	{
		if ((1 <= n && n <= 100) && (1 <= m && m <= 100))
		{
			scanf("%d %d %d", &i, &j, &k); // 1 2 3 -> 1~2번 바구니에 3번 공
			for (int b = i; b <= j; b++)
			{
				*(ary + b - 1) = k;
			}
		}
		count++;
	}
	for (int a = 0; a < n; a++)
	{
		printf("%d ", *(ary + a));
	}

	return 0;
}