#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<char>> mat(n, vector<char>(m))
#define w(n) while (n--)
#define ll long long
using namespace std;

ll revint(ll n)
{
    string as = "";
    while (n > 0)
    {
        ll rem = n % 10;
        if (rem != 0)
        {
            char r = rem + '0';
            as += r;
        }
        n /= 10;
    }
    reverse(as.begin(), as.end());
    n = stoi(as);
    return n;
}

int main()
{
    ll a, b, sum = 0, sumt = 0;
    cin >> a >> b;
    sum = a + b;

    sum = revint(sum);
    a = revint(a);
    b = revint(b);
    sumt = a + b;

    if (sum == sumt)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}