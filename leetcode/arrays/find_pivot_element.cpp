#include <bits\stdc++.h>
using namespace std;

int pivot_element(vector<int> &nums)
{
    int sum = 0, sum_i = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        sum -= nums[i];
        if (sum == sum_i)
            return i;
        sum_i += nums[i];
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
    cout << pivot_element(nums) << endl;
    return 0;
}