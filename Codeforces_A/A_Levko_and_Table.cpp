#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<int>> mat(n, vector<int>(m))
#define w(n) while (n--)
#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    mat(n, n);

    read(n, i)
    {
        read(n, j)
        {
            if (i == j)
                cout << k << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}