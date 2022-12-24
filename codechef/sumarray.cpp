#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, cnt1 = 0, ans = 0;
        cin >> n;
        vector<ll> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                cnt1++;
            else
            {
                if (cnt1 >= 1)
                {
                    ll sum = (cnt1 * (cnt1 + 1));
                    sum /= 2;
                    ans += sum;
                }
                cnt1 = 0;
            }
        }
        if (cnt1 >= 1)
        {
            ll sum = (cnt1 * (cnt1 + 1));
            sum /= 2;
            ans += sum;
        }
        cout << ans << endl;
    }
    return 0;
}