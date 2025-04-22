#include <stdio.h>

int main(void)
{
	int test, count = 0;
	char ary[1000];
	scanf("%d", &test);

	for (int i = 0; i < test; i++)
	{
		scanf("%s", ary);
		while (*(ary+count) != '\0')
		{
			count++;
		}
		printf("%c%c\n",*ary, *(ary+count - 1));
		count = 0;
	}

	return 0;
}