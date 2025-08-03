#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> a;
	int b,i,c;
	cin >> b;
	for (i = 1; i <= b; i++)
	{
		a.push(i);
	}
	while (a.size() != 1)
	{
		a.pop();
		c = a.front();
		a.pop();
		a.push(c);
	}
	cout << a.front();
}