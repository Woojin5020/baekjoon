#include <stdio.h>


int main(void)
{
	int num[10] = { 0 };
	int num2[10] = { 0 };
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", num + i);
		num[i] %= 42;
		//printf("num[%d]의 값은 : %d\n",i, num[i]);

	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (num[i] == num[j]) num[j] = -1;
		}
		for (int j = i-1; j >= 0; j--)
		{
			if (num[i] == num[j]) num[j] != -1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (num[i] != -1) count++;
	}
	printf("%d", count);
	return 0;
}