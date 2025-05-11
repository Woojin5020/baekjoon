#include <stdio.h>
#include <string.h>

int main(void)
{
	char ary;
	char value[10000] = { 0 };
	int str_len = 0;
	int i = 0;
	while(scanf("%c",&ary) != EOF)
	{
		value[i] = ary;
		i++;
	}
	str_len = strlen(value);
	value[str_len-1] = '\0';
	printf("%s", value);
	return 0;
}