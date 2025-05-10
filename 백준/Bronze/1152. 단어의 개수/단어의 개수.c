#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1000000
#define SP 32 
int main(void)
{
	char* b = (char*)malloc(sizeof(char) * BUFSIZE);
	int i=0,count=0;
	gets(b);
	while (*(b+i) != NULL)
	{
		if (*(b + i) != SP)
		{
			while (*(b + i) != SP)
			{
				i++;
				if (*(b + i) == NULL) break;
			}
			count++;
		}
		else i++;
	}
	printf("%d", count);
	return 0;
}