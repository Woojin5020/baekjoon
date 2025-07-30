#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> pus;
	int a, b,i;
	cin >> a >> b;

	for (i = 1; i <= a; i++) pus.push(i);
	cout << "<";
	while (1)
	{
		for (i = 0; i < b; i++)
		{
			if (i == b - 1)
			{
				cout << pus.front();
				pus.pop();
			}
			else
			{
				pus.push(pus.front());
				pus.pop();
			}
		}
		if (pus.empty()) break;
		cout << ", ";
	}
	cout << ">" << "\n";


	return 0;
}