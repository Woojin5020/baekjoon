#include <stdio.h>
int main(void)
{
	int num = 0; // 변수 선언, 공간 할당, 0으로 초기화
	int num2[100] = { 0 }; //4byte * 1000 크기의 배열공간 할당
	scanf("%d", &num); //몇개의 정수를 입력받을건지 확인
	int count = 0; //찾으려는 정수가 입력 받은 변수들중 총 몇개인지 카운트하는 변수
	int v = 0; // 찾으려는 정수

	if (1 <= num && num <= 100) // 입력받은 정수가 1보다 크거나 같은지, 100보다 작거나 같은지 확인
	{
		for (int i = 0; i < num; i++) // 입력 받을 개수만큼 반복 진행
		{
			scanf("%d", &num2[i]);
			if ( num2[i] < - 100 && 100 < num2[i] ) // 입력받은 정수가 -100 보다 작거나, 100보다 크다면 반복문 종료
			{
				break;
			}
		}

		scanf("%d", &v); //입력 받은 정수들중 찾으려는 변수 입력

		if (-100 <= v && v <= 100) // 찾으려는 정수도 -100보다 작은지 100보다 큰지 확인
		{
			for (int i = 0; i < num; i++)
			{
				if (num2[i] == v)
				{
					count++;
				}
			}
		}
		printf("%d", count);
		count = 0;
	}
	return 0;
}