#include <bits\stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonzero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[nonzero]);
            nonzero++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    moveZeroes(arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}