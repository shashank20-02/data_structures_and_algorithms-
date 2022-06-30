#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // approach 1:

    // int i = 0;
    // for (int j = 0; j < n; j++)
    // {
    //     if (arr[j] < 0)
    //     {
    //         swap(arr[i++], arr[j]);
    //     }
    // }

    // approach 2:

    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        if (arr[hi] < 0)
        {
            swap(arr[lo++], arr[hi--]);
        }
        else if (arr[hi] >= 0)
            hi--;
        else
            lo++;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;

    // -12 11 -13 -5 6 -7 5 -3 -6
}