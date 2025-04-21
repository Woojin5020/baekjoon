#include <stdio.h>
#include <stdlib.h>

void reverse(int* ary, int num1, int num2);

int main(void)
{
	int n=0, m=0;
	int num1, num2;
	scanf("%d %d", &n, &m);
	int* ary = (int*)malloc(sizeof(int) * n);
	if (ary == NULL) exit(1);
	for (int i = 0; i < n; i++) ary[i] = i+1;
	//for (int i = 0; i < n; i++) printf("ary[%d] : %d\n", i, ary[i]);

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &num1, &num2);
		if (num1 == num2) continue;
		else if (num1 != num2) reverse(ary, num1, num2);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", ary[i]);
	}
	free(ary);
	return 0;
}
void reverse(int* ary, int num1, int num2) // 1 2
{
	int a = 0;
	int* num_ary = (int*)malloc(sizeof(int) * ((num2 - num1) + 1));
	if (num_ary == NULL) exit(1);
	for (int i = 0; i < (num2 - num1) + 1; i++)
	{ 
		num_ary[i] = ary[num2-i-1];
	}
	for (int i = num1-1; i < num2; i++)
	{
		ary[i] = num_ary[a];
		a++;
	}
	//printf("%d %d %d %d %d\n", ary[0], ary[1], ary[2], ary[3], ary[4]);
	free(num_ary);
}