#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	int count = num / 4;

	for (int i = 0; i < count; i++)
	{
		printf("long ");
	}
	printf("int");
	return 0;
}