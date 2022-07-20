#include <bits\stdc++.h>

#define read(n) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)

#define ll long long
using namespace std;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll x, y, z;
    y = sqrt(((a * b) / c));
    x = a / y;
    z = b / y;

    ll sum = (4 * x) + (4 * y) + (4 * z);
    cout << sum << endl;
    return 0;
}

// length - x , height - y , width - z
// x * y = a - a / y
// y * z = b - b / y
// z * x = c - a / y * b / y = c - y^2 = ab / c