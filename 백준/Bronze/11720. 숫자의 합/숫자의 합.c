#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int value = 0;
	scanf("%d", &n);
	char* num = (char*)malloc(sizeof(char) * n + 1);
	scanf("%s", num);
	for (int i = 0; i < sizeof(char) * n; i++) value += *(num + i) - 48;
	printf("%d", value);
	return 0;
}