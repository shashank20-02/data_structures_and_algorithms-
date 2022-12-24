#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<int>> mat(n, vector<int>(m))
#define w(n) while (n--)
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    w(t)
    {
        ll row, col;
        cin >> row >> col;
        if (row % 2 == 0 && col % 2 == 0)
            cout << "0" << endl;
        else if (row % 2 == 1 && col % 2 == 1)
        {
            int ans = (row % 2) * col + (col % 2) * row - 1;
            cout << ans << endl;
        }
        else
        {
            if (row % 2 == 0)
            {
                cout << row << endl;
            }
            else
                cout << col << endl;
        }
    }
    return 0;
}