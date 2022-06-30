#include <bits\stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli n;
    cin >> n;
    vector<lli> arr(n + 1, 0);

    for (lli i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<lli> left(n + 1, 0);
    vector<lli> right(n + 1, 0);

    for (lli i = 1; i <= n; i++)
        left[arr[i]] = i;

    for (lli i = n; i >= 1; i--)
        right[arr[i]] = n - i + 1;

    lli m, ansleft = 0, ansright = 0;
    cin >> m;
    while (m--)
    {
        lli x;
        cin >> x;
        ansleft += left[x];
        ansright += right[x];
    }

    cout << ansleft << " " << ansright << endl;
    return 0;
}