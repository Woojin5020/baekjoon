#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(void)
{
    stack<int> ary[101];
    bool chk[101] = { false, };
    queue<int> q;
    q.push(1);
    int i, j;
    int x, y;
    int cnt = 0;
    cin >> i >> j;
    // 배열의 크기를 저장할 i, 
    // 입력할 배열의 x,y의 횟수 j

    for (i = 0; i < j; i++)
    {
        cin >> x >> y;
        ary[x].push(y);
        ary[y].push(x);
    }
    while (1)
    {
        i = q.front();
        q.pop();
        //cout << "i:" << i << "\n";
        while (!ary[i].empty() || chk[i] == false)
        {
            if (ary[i].empty())
            {
                if(i != 1) cnt++;
                break;
            }
            else
            {
                q.push(ary[i].top());
                ary[i].pop();
            }
        }
        chk[i] = true;
        if (q.empty()) break;
    }
    cout << cnt;
    return 0;
}