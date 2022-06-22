#include <bits\stdc++.h>
using namespace std;

int BinarySearch(vector<int> nums, int key)
{
    int lo = 0, hi = nums.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (nums[mid] == key)
            return mid;
        else if (nums[lo] <= nums[mid])
        {
            if (key >= nums[lo] && key <= nums[mid])
                hi = mid - 1;
            else
                lo = mid + 1;
        }

        else
        {
            if (key >= nums[mid] && key <= nums[hi])
                lo = mid + 1;
            else
                hi = mid - 1;
        }
    }
    return -1;
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
    int key;
    cin >> key;

    cout << BinarySearch(nums, key);

    return 0;
}