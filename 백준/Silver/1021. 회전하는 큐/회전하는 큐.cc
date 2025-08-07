#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	int n, m,i,j,value=0,cnt=0;
	deque<int> dq;
	cin >> n >> m;
	for (i = 1; i <= n;i++)
	{
		dq.push_back(i);
	}
	for (i = 0; i < m; i++)
	{
		cin >> n;
		while (1)
		{
			if (n == dq.front())
			{
				dq.pop_front();
				int a = dq.size() - cnt;
				if (a > cnt)
				{
					value += cnt;
					//cout << "cnt :" << cnt << '\n';
					cnt = 0;
					break;
				}
				else if (a < cnt)
				{
					value += a+1;
					//cout << "a :" << a << '\n';
					cnt = 0;
					break;
				}
				else if (a == cnt)
				{
					value += cnt;
					//cout << "cnt :" << cnt << '\n';
					cnt = 0;
					break;
				}
			}
			else
			{
				dq.push_back(dq.front());
				//cout << "dq.front() :" << dq.front() << '\n';
				dq.pop_front();
				cnt++;
			}
		}
	}
	cout << value << '\n';
	return 0;
}