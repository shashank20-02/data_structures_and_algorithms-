#include <bits\stdc++.h>
using namespace std;

#define ll long long

bool isPossible(vector<ll> arr, ll n, ll h, ll mid, ll sum)
{
    ll all_h = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= mid)
            all_h++;
        else
        {
            all_h += (ll)(arr[i] / mid);
            if (arr[i] % mid != 0)
                all_h++;
        }
    }
    return (all_h <= h);
}

ll MINEAT(vector<ll> arr, ll n, ll h)
{
    ll lo = 0, hi;
    ll maxi = -1;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        sum += arr[i];
    }

    hi = maxi;
    ll ans = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        if (isPossible(arr, n, h, mid, sum))
        {
            hi = mid - 1;
            ans = mid;
        }
        else
            lo = mid + 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vector<ll> arr(n, 0);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        cout << MINEAT(arr, n, h) << endl;
    }
    return 0;
}