#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<int>> mat(n, vector<int>(m))
#define w(n) while (n--)
#define ll long long
using namespace std;

int main()

{

    int y, k, n;

    cin >> y >> k >> n;

    int x = k - y % k;

    if (x + y > n)
        return cout << -1 << endl, 0;

    for (int i = x; i <= n - y; i += k)

        cout << i << " ";

    return 0;
}