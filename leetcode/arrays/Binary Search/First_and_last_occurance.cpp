#include <bits/stdc++.h>
using namespace std;

int first_occurance(vector<int> nums, int key)
{
    int lo = 0, hi = nums.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == key)
        {
            ans = mid;
            hi = mid - 1;
        }

        else if (key > nums[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return ans;
}

int last_occurance(vector<int> nums, int key)
{
    int lo = 0, hi = nums.size() - 1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == key)
        {
            ans = mid;
            lo = mid + 1;
        }

        else if (key > nums[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return ans;
}

pair<int, int> first_and_last_occurance(vector<int> nums, int key)
{
    pair<int, int> ans;
    ans.first = first_occurance(nums, key);
    ans.second = last_occurance(nums, key);
    return ans;
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

    pair<int, int> ans = first_and_last_occurance(nums, key);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}