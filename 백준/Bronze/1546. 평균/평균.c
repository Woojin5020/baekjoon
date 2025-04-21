#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	double avg = 0.0, max = 0.0;
	scanf("%d", &n);
	int* test = (int*)malloc(sizeof(int) * n);
	double* result = (double*)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", test + i);
		if (max == 0)
		{
			max = *(test + i) * 1.0;
		}
		if (*(test + i) > max)
		{
			max = *(test + i) * 1.0;
		}
	}
	//printf("%lf", max);
	for (int i = 0; i < n; i++)
	{
		*(result + i) = *(test + i) / max * 100.0;
		avg += *(result + i);
		//printf("%lf\", avg);
	}
	printf("%.2lf", avg / (n * 1.0));

	free(test);
	free(result);
	return 0;
}