#include <bits\stdc++.h>

#define read(n) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
using namespace std;

bool check(vector<int> nums, int min)
{
    int n = nums.size();
    read(n)
    {
        if (nums[i] != min)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    arr(n);
    read(n)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int min = arr[0];
    while (check(arr, min))
    {
        read(n)
        {
            if (arr[i] != min)
                arr[i] -= min;
        }
        min = *min_element(arr.begin(), arr.end());
    }
    int sum = 0;
    read(n)
    {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}