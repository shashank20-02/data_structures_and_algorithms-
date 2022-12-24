#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, maxx = 0, minx = 0, maxy = 0, miny = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            maxx = max(x, maxx);
            minx = min(x, minx);
            maxy = max(y, maxy);
            miny = min(y, miny);
        }
        int ans = 2 * (maxx + maxy - minx - miny);
        cout << ans << endl;
    }

    return 0;
}