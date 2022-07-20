#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long ans = 0;
        int ptr = 0;
        while (ptr < n && a[ptr] == 0)
            ptr++;
        for (int i = ptr; i < n - 1; ++i)
        {
            ans += a[i];
            if (a[i] == 0)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}