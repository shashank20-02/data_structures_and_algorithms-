#include <iostream>
#define ll long long
#define limit 1000000000
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a % b == 0)
            cout << "-1" << endl;
        else if (c % a == 0 && c % b != 0)
            cout << c << endl;
        else
        {
            ll rem = c / a;
            ll tot = a * (rem + 1);
            while (!(tot % a == 0 && tot % b != 0))
            {
                tot += a;
            }
            cout << tot << endl;
        }
    }

    return 0;
}