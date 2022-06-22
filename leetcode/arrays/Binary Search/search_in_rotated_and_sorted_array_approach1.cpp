#include <bits\stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int low, int high, int target)
{
    int lo = low, hi = high;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
        {
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    return -1;
}

int getpivot(vector<int> nums)
{
    int s = 0, e = nums.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }
        else
            e = mid;
    }
    return s;
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

    int pivot = getpivot(nums);
    if (nums[pivot] >= key && key <= nums[n - 1])
        cout << binarySearch(nums, pivot, n - 1, key) << endl;
    else
        cout << binarySearch(nums, 0, pivot - 1, key) << endl;
    return 0;
}