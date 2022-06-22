#include <bits\stdc++.h>
using namespace std;

int peak_of_the_mountain(vector<int> &nums)
{
    int lo = 0, hi = nums.size() - 1;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < nums[mid + 1])
        {
            lo = mid + 1;
        }
        else
            hi = mid;
    }
    return lo;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    return 0;
}