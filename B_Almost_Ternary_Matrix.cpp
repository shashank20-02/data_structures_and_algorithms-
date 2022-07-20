#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                vector<int> temp(m, 1);
                matrix[i] = temp;
            }
            else
            {
                vector<int> temp(m, 0);
                matrix[i] = temp;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                for (int j = 0; j < m; j++)
                {
                    matrix[i][j] = 0;
                    j += 2;
                }
            }
            else
            {
                for (int j = 0; j < m; j++)
                {
                    matrix[i][j] = 1;
                    j += 2;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}

// 1 0 0 1 - even - interval(2)
// 0 1 1 0 - odd - interval(1)
// 1 0 0 1
// 0 1 1 0