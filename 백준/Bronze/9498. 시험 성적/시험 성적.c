#include <stdio.h>

int main(void)
{
	int number;
	scanf("%d", &number);

	if (number >= 90)
		printf("A");
	else if (number >= 80)
		printf("B");
	else if (number >= 70)
		printf("C");
	else if (number >= 60)
		printf("D");
	else
		printf("F");
	return 0;
}