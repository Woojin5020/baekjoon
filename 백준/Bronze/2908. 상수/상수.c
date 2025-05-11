#include <stdio.h>

void num_swap(char* num);
int change_int_num(char* num);
int pow(int num);

int main(void)
{
	char char_num1[4] = { 0 };
	char char_num2[4] = { 0 };
	int int_num1 = 0, int_num2 = 0;

	scanf("%s %s", char_num1, char_num2);
	num_swap(char_num1);
	num_swap(char_num2);
	int_num1 = change_int_num(char_num1);
	int_num2 = change_int_num(char_num2);

	if (int_num1 > int_num2) printf("%d", int_num1);
	else printf("%d", int_num2);

	return 0;
}

void num_swap(char* num)
{
	int i;
	i = *num;
	*num = *(num + 2);
	*(num + 2) = i;
}

int change_int_num(char* num)
{
	int result = 0;
	for (int i = 2; i >= 0; i--) result += (int)(*(num + 2 - i) - 48) * pow(i);
	return result;
}

int pow(int num)
{
	int value = 1;
	for (int i = 0; i < num; i++) value *= 10;
	return value;
}