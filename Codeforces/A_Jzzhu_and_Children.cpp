#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m, maxi = 0, last = 1;
    cin >> n >> m;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (ceil(arr[i] / m) >= maxi)
        {
            last = i;
            maxi = ceil(arr[i] / m);
        }
    }

    cout << last << endl;
    return 0;
}