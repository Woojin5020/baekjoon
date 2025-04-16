#include <stdio.h>

int main(void)
{
	// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
	// INPUT
	// 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 
	// 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
	// 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
	// OUTPUT
	// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

	int num[1000000] = { 0 };
	int n = 0;
	int min = 0, max = 0;
	int max_index = 0, min_index = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if (i == 0)
		{
			max = num[i];
			max_index = i;
			min = num[i];
			min_index = i;
		}
		else if (i > 0)
		{
			if (max < num[i])
			{
				max = num[i];
				max_index = i;
			} // max값 찾기
			if (min > num[i])
			{
				min = num[i];
				min_index = i;
			}
		}	
	}
	// 50 10 20 30 40 500 400 300 200 100
	//printf("max의 값 : %d, min의 값 : %d\n", max, min);
	printf("%d %d\n", num[min_index],num[max_index]);
	
	
	// 제일 큰 수가 왼쪽
	// 제일 작은 수가 오른쪽으로 가도록 정렬
	//min = num[index];
	//max = num[index];
	//printf("%d %d", min, max);
	return 0;
}