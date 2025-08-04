#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> a;
	int num,i,j;
	cin >> i;
	for (j = 0; j < i;j++)
	{
		cin >> num;
		if (num > 0)
		{
			a.push(num);
		}
		else if(num == 0)
		{
			a.pop();
		}
	}
	i = a.size();
	num = 0;
	for (j = 0; j < i; j++)
	{
		num += a.top();
		a.pop();
	}
	cout << num;
	return 0;
}