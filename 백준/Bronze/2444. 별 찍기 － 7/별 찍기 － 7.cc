#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	int count;
	char star = '*';
	cin >> count;

	for (int i = 0; i < 2*count-1;)
	{
		if (i < count)
		{
			for (int j = count-1; j > i;j--)
			{
				cout << ' ';
			}
			for (int k = 0;k < (1 + (i * 2));k++)
			{
				cout << '*';
			}
			cout << '\n';
			i++;
		}
		else
		{
			for (int j = 0; j < i-count+1;j++)
			{
				cout << ' ';
			}
			for (int k = 0;k < ((-2 * i) + ((count * 2)-1)*2 - 1);k++)
			{
				cout << "*";
			}
			cout << '\n';
			i++;
		}
	}
}