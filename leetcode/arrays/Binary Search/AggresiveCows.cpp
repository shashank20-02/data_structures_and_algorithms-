#include <bits\stdc++.h>
using namespace std;

bool ispossible(vector<int> &stalls, int k, int mid)
{
    int cowcount = 1;
    int lastpos = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if ((stalls[i] - lastpos) >= mid)
        {
            cowcount++;
            if (cowcount == k)
                return true;

            lastpos = stalls[i];
        }
    }
    return false;
}

int AggresiveCows(vector<int> &stalls, int k)
{
    int lo = 0, hi;
    int maxi = INT_MIN;
    sort(stalls.begin(), stalls.end());
    for (int i = 0; i < stalls.size(); i++)
        maxi = max(maxi, stalls[i]);

    hi = maxi;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (ispossible(stalls, k, mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << AggresiveCows(arr, k) << endl;
    }
    return 0;
}