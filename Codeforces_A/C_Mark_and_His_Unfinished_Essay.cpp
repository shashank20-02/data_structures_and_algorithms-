#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int64_t n, c, q;
        cin >> n >> c >> q;
        string initstring;
        cin >> initstring;

        while (c--)
        {
            int64_t l, r;
            cin >> l >> r;
            string subs = initstring.substr(l - 1, r - l + 1);
            initstring += subs;
        }
        while (q--)
        {
            int64_t k;
            cin >> k;
            cout << initstring[k - 1] << endl;
        }
    }
    return 0;
}