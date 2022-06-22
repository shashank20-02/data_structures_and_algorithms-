#include <bits/stdc++.h>
using namespace std;

int count_user = 0;

int BinarySearch(vector<int> nums, int key)
{
    int lo = 0, hi = nums.size() - 1;
    while (lo <= hi && (nums[lo] <= key && nums[hi] >= key))
    {
        int mid = (lo + hi) / 2;
        if (nums[mid] == key)
            return mid;

        else if (key > nums[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
        count_user++;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int key;
    cin >> key;
    cout << BinarySearch(nums, key);
    return 0;
}