#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main(void)
{
	queue<string> fun;
	queue<int> push_value;
	stack<int> result_value;
	int m, b;
	string str;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (!str.compare("push"))
		{
			cin >> b;
			fun.push(str);
			push_value.push(b);
		}
		else fun.push(str);
	}

	for (int i = 0; i < m; i++)
	{
		if (fun.front() == "push")
		{
			result_value.push(push_value.front());
			fun.pop();
			push_value.pop();
		}
		else if (fun.front() == "pop")
		{
			if (!result_value.empty())
			{
				cout << result_value.top() << endl;
				fun.pop();
				result_value.pop();
			}
			else
			{
				cout << -1 << endl;
				fun.pop();
			}
		}
		else if (fun.front() == "size")
		{
			fun.pop();
			cout << result_value.size() << endl;
		}
		else if (fun.front() == "empty")
		{
			fun.pop();
			cout << result_value.empty() << endl;
		}
		else if (fun.front() == "top")
		{
			if (!result_value.empty())
			{
				cout << result_value.top() << endl;
				fun.pop();
				//result_value.pop();
			}
			else
			{
				cout << -1 << endl;
				fun.pop();
			}
		}
	}


	return 0;
}