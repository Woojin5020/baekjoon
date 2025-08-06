#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int a;
	int b = 0;
	stack<char> dq;
	while (getline(cin, str))
	{
		b = 0;
		if (str.size() == 1 && str[0] == '.')break;
		for (auto a : str)
		{
			if (a == ' ') continue;
			if (dq.empty())
			{
				if (a == ')' || a == ']')
				{
					dq.push(a);
					cout << "no\n";
					b++;
					break;
				}
				else if (a == '(' || a == '[')
				{
					dq.push(a);
				}
			}
			else if (!dq.empty())
			{
				if (a == ')')
				{
					if (dq.top() == '(') dq.pop();
					else
					{
						cout << "no\n";
						b++;
						break;
					}
				}
				else if (a == ']')
				{
					if (dq.top() == '[') dq.pop();
					else
					{
						cout << "no\n";
						b++;
						break;
					}
				}
				else if (a == '(' || a == '[')
				{
					dq.push(a);
				}
			}
		}
		a = dq.size();
		if (dq.size() > 0)
		{
			for (int i = 0; i < a;i++)
			{
				dq.pop();
			}
			if (b == 0)
			{
				cout << "no\n";
			}
		}
		else if (dq.empty())cout << "yes\n";
	}
}