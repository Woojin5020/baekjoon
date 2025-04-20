#include <stdio.h>


int main(void)
{
	int student[30] = { 0 };
	int index[30] = { 0 };
	int n = 0, input = 28;
	for (int i = 0; i < 30; i++) student[i] = i + 1; // 배열 초기화
	for (int i = 0; i < input; i++)
	{
		scanf("%d", &n);
		if (*(student + n - 1) == n) *(student + n - 1) = 0;
	}
	//printf("\n");
	for (int i = 0; i < 30; i++)
	{
		if (*(student + i) != 0)
		{
			index[i] = *(student + i);
			printf("%d\n", index[i]);
		}
	}

	return 0;
}