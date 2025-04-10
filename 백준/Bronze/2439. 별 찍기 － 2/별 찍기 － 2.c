int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = N; i > 0; i--) // 5를 입력받아 5번 반복
	{
		int a = N; // a=5로 초기화
		for (int j = 1; j < i; j++)
		{
			printf(" ");
			a--;
		}
		for (int k = 0; k < a; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}