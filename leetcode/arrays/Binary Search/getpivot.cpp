#include <bits\stdc++.h>
using namespace std;

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
        cin >> nums[i];

    cout << getpivot(nums) << endl;
    return 0;
}