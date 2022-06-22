#include <bits\stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid)
{
    int nop = 1;
    long long int allocated = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        if (allocated + boards[i] <= mid)
        {
            allocated += boards[i];
        }
        else
        {
            nop++;
            if (nop > k || boards[i] > mid)
            {
                return false;
            }
            allocated = boards[i];
        }
    }
    return true;
}

int PainterPartition(vector<int> &boards, int k)
{

    long long int lo = 0, hi;
    long long int sum = 0;
    for (int i = 0; i < boards.size(); i++)
        sum += boards[i];

    hi = sum;
    long long int ans = -1;
    while (lo <= hi)
    {
        long long int mid = lo + (hi - lo) / 2;
        if (isPossible(boards, k, mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
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

        cout << PainterPartition(arr, k) << endl;
    }
    return 0;
}