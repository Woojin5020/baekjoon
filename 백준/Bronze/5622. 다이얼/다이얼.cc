#include <iostream>
#include <cstring>
using namespace std;
#define size 16

int main()
{
	char ary[size];
	const char* ary2[] = {"ABC", "DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
	int total_time = 0;
	cin >> ary;

	for (int i = 0;i < size;i++)
	{
		if (ary[i] == NULL) break;
		else
		{
			for (int j = 0;j < 8;j++)
			{
				for (int k = 0;k < strlen(ary2[j]);k++)
					if(ary2[j][k] == ary[i]) total_time += j + 3;
			}
		}
	}
	cout << total_time;
}