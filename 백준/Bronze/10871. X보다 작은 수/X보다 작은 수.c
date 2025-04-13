#include <stdio.h>
int main(void)
{
	// 수열의 개수 N과 X라는 숫자가 첫번째 입력으로 주어짐
	// 둘째줄에는 A를 이루는 숫자 배열 N개가 주어짐
	// 주어지는 수열은 1보다 크거나 같고, 10,000보다 작거나 같다
	// 수열 안에서 x보다 작은 숫자들을 출력
	// x보다 작은 숫자들을 수열 순서대로 차례로 출력

	int N, X;
	scanf("%d %d", &N, &X);
	int num[10000] = { 0 };

	if (1 <= N && X <= 10000)
	{
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &num[i]);
			if ((1 <= num[i] && num[i] <= 10000) && num[i] < X)
			{
				printf("%d ", num[i]);
			}
		}
	}
	return 0;
}