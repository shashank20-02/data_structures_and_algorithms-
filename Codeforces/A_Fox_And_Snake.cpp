#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mat(n + 1, vector<char>(m + 1, '.'));
    int vec = m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            mat[i][vec] = '#';
            if (vec == m)
                vec = 1;
            else
                vec = m;
        }
        else
        {
            for (int j = 1; j <= m; j++)
                mat[i][j] = '#';
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}
