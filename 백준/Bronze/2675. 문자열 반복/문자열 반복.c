#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int T,R;  
	char str[20] = { '\0' };
	char* P;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &R);
		scanf("%s", str);
		P = (char*)malloc(sizeof(char) * strlen(str) * R + 1);
		if (P == NULL) exit(1);

		for (int j = 0; j < strlen(str); j++)
		{
			for (int k = 0; k < R; k++)
			{
				*(P + (R * j) + k) = *(str + j);
			}
		}
		*(P + strlen(str) * R) = '\0';
		printf("%s\n", P);
		free(P);
	}
	
	return 0;
}