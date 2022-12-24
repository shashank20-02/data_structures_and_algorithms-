#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> arr, int i)
{
    if (i == arr.size() - 1)
    {
        return true;
    }

    bool result = sorted(arr, i + 1);
    bool ans = result && (arr[i] <= arr[i + 1]);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sorted(arr, 0) << endl;
    return 0;
}