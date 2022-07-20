#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<char>> mat(n, vector<char>(m))

#define ll long long
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    mat(n, m);

    read(n, i)
    {
        read(m, j)
        {
            cin >> mat[i][j];
        }
    }
    bool flag = 0;
    read(n, i)
    {
        if (i % 2 == 0)
            flag = 1;
        else
            flag = 0;
        read(m, j)
        {
            if (mat[i][j] == '.')
            {
                if (flag == 0)
                    mat[i][j] = 'B';
                else
                    mat[i][j] = 'W';
                flag = !flag;
            }
            else
                flag = !flag;
        }
    }

    read(n, i)
    {
        read(m, j)
                cout
            << mat[i][j];
        cout << endl;
    }
    return 0;
}
