#include <bits\stdc++.h>
using namespace std;

bool ispossible(vector<long long int> &trees, long long int n, long long int m, long long int mid)
{
    long long int isans = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] - mid > 0)
        {
            isans += (trees[i] - mid);
            if (isans >= m)
                return true;
        }
    }
    return false;
}

int Eko(vector<long long int> &trees, long long int n, long long int m)
{
    long long int lo = 0, hi;
    long long int maxi = -1;
    for (int i = 0; i < n; i++)
        maxi = max(maxi, trees[i]);

    hi = maxi;
    long long int ans = -1;
    while (lo <= hi)
    {
        long long int mid = lo + (hi - lo) / 2;
        if (ispossible(trees, n, m, mid))
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
    long long int n, m;
    cin >> n >> m;
    vector<long long int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << Eko(arr, n, m) << endl;
    return 0;
}