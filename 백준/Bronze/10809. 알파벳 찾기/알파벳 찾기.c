#include <stdio.h>

int main(void)
{
	char alpha_str[100];  // 문자열을 입력받을 배열
	scanf("%s",alpha_str); // baekjoon

	int count = 0;     
	int value[26] = {0}; //결과가 들어갈 알파벳 배열
	int value_index;

	for (int i = 0; i < sizeof(value) / sizeof(int); i++) *(value + i) = -1; // 알파벳 a~z배열을 -1로 초기화

	while(*(alpha_str + count) != '\0')
	{
		value_index = *(alpha_str + count) - 97;
		if (*(value + value_index) == -1)
		{
			*(value + value_index) = count;
			count++;
		}
		else if (*(value + value_index) != -1)
		{
			count++;
		}
	}

	for (int i = 0; i < sizeof(value) / sizeof(int); i++) printf("%d ",*(value + i));
	return 0;
}