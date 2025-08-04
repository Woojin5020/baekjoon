#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> q;
	int i, num;
	cin >> num;
	for (i = 1; i <= num;i++)
	{
		q.push(i);
	}
	while(1)
	{
		cout << q.front() << " ";
		if (q.size() != 1)
		{
			q.pop();
			q.push(q.front());
			q.pop();
		}
		else
		{
			break;
		}
	}
}