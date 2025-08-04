#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	//queue<int> q[200001];
	queue<int>* q = new queue<int>[200001];
	int i, j,k,l,num,w;
	cin >> i >> j;
	int* cus = new int[i];

	for (k = 0; k < i; k++)
	{
		cin >> num;
		cus[k] = 0;
		for (l = 0; l < num; l++)
		{
			cin >> w;
			q[w].push(k);
		}
	}
	for (k = 0; k < j;k++)
	{
		cin >> num;
		if (!q[num].empty())
		{
			int value = q[num].front();
			cus[value]++;
			q[num].pop();
		}
	}
	for (k = 0;k < i;k++)
	{
		cout << cus[k] << " ";
	}
}