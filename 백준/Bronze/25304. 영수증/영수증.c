#include <stdio.h>

int main(void)
{
	// 영수증에 적힌,
	// 구매한 각 물건의 가격과 개수
	// 을 보고, 구매한 물건의 가격과 개수로 계산한 총
	// 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.

	int bilge; //영수증에 적힌 금액
	int count; //구매한 물건의 수
	int num1; // 구매한 물건의 가격들이 들어갈 배열
	int num2; // 구매한 물건의 개수가 들어갈 배열
	int real_pay = 0; //영수증을 실제로 계산한 결과

	scanf("%d", &bilge); //영수증에 적힌 총 금액 입력
	scanf("%d", &count); //영수증에 적힌 구매한 물건의 종류의 수 입력
	for (int i = 0; i < count; i++) // 물건의 종류의 수 만큼 반복
	{
		scanf("%d %d", &num1, &num2); // 물건의 가격, 개수 입력
		real_pay += num1 * num2;
	}

	if (bilge == real_pay)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}