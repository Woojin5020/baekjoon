#include <stdio.h>

int main(void)
{
	// 같은 눈이 3개가 나오면 10,000원 + (같은 눈)x 1,000원의 상금
	// 같은 눈이 2개만 나오는 경우 1000 + (같은 눈)X 100원의 상금
	// 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)x100원의 상금

	int dice1, dice2, dice3;
	int prize;
	scanf("%d %d %d", &dice1, &dice2, &dice3);

	if (dice1 == dice2 && dice2 == dice3) // 주사위 눈 3개가 다 같은경우.
	{
		prize = 10000 + dice1 * 1000;
	}
	else if ((dice1 != dice2 && dice2 != dice3) && dice1 != dice3) // 주사위 눈 3개가 다 다른경우
	{
		int big;
		if (dice1 > dice2 && dice1 > dice3)
		{
			big = dice1;
			prize = big * 100;
		}
		else if (dice2 > dice1 && dice2 > dice3)
		{
			big = dice2;
			prize = big * 100;
		}
		else {
			big = dice3;
			prize = big * 100;
		}
	}
	else // 주사위 눈 2개만 같은 경우
	{
		int big;
		if (dice1 == dice2)
		{
			prize = 1000 + dice1 * 100;
		}
		else if (dice1 == dice3)
		{
			prize = 1000 + dice1 * 100;
		}
		else
		{
			prize = 1000 + dice2 * 100;
		}
	}
	printf("%d", prize);
	return 0;
}