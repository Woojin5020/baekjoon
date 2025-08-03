#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> a;
	int b,i;
	cin >> b;
	for (i = 1; i <= b; i++)
	{
		a.push(i);
	}
	while (a.size() != 1)
	{
		a.pop();
		a.push(a.front());
		a.pop();
	}
	cout << a.front();
}