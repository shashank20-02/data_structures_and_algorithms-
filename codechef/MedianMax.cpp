#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n, 0), b(n, 0);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<long long> c;

        int lo = (n - 1) / 2;
        int hi = n - 1;
        while (lo < n && hi >= (n - 1) / 2)
        {
            c.push_back(a[lo] + b[hi]);
            lo++;
            hi--;
        }

        sort(c.begin(), c.end());
        long long ans = c[0];
        cout << ans << endl;
    }
    return 0;
}