#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, j, k;
    int n, m;
    cin >> n >> m;

    vector<vector<vector<int>>> v(2, vector<vector<int>>(n, vector<int>(m)));
    vector<vector<int>> matrix(n, vector<int>(m, 0));

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < m; k++)
            {
                cin >> v[i][j][k];
                matrix[j][k] += v[i][j][k];
            }
        }
    }
    for (j = 0; j < n; j++)
    {
        for (k = 0; k < m; k++)
        {
            cout << matrix[j][k] << " ";
        }
        cout << endl;
    }
    return 0;
}