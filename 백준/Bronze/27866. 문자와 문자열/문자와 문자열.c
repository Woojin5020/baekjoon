#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000];
	int i = 0;

	scanf("%s", str);
	scanf("%d", &i);
	if (1 <= i && i <= strlen(str))
	{
		printf("%c", *(str + i - 1));
	}

	return 0;
}