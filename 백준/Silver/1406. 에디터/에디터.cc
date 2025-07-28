#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<char> lt;
	list<char>::iterator t;
	string str;
	int c, i;
	char a;
	cin >> str >> c;
	//cout << str.size();
	for (i = 0; i < str.size(); i++)
	{
		lt.push_back(str[i]);
	}
	t = lt.end();

	for (i = 0; i < c; i++)
	{
		cin >> a;
		if (a == 'P')
		{
			cin >> a;
			lt.insert(t,a);
		}
		else if (a == 'L')
		{
			if (t != lt.begin())
			{
				t--;
			}
		}
		else if (a == 'D')
		{
			if (t != lt.end())
			{
				t++;
			}
		}
		else if (a == 'B')
		{
			if (t != lt.begin())
			{
				t--;
				lt.erase(t++);
			}
			//cout << *t << '\n';
		}
	}
	for (t = lt.begin(); t != lt.end(); t++)
	{
		cout << *t;
	}
}