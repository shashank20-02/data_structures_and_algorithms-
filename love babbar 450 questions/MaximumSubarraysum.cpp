#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxsum = INT_MIN;

    // approach 1 : O(N^3)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //             sum += arr[k];
    //         maxsum = max(maxsum, sum);
    //     }
    // }

    cout << maxsum << endl;
    return 0;
}