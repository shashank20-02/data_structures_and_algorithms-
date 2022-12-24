#include <bits\stdc++.h>
#define read(n, i) for (int i = 0; i < n; i++)
using namespace std;

int mini(int i, int j, int n, int m)
{
    if (i == 0 || j == 0 || j == m - 1 || i == n - 1)
        return 2;
    else
        return 4;
}

int main()
{

    int n, m;
    cin >> n >> m;
    int ans = INT_MAX;
    read(n, i)
    {
        read(m, j)
        {
            int val;
            cin >> val;
            if (val == 1)
            {
                ans = min(ans, mini(i, j, n, m));
            }
        }
    }

    cout << ans << endl;

    return 0;
}