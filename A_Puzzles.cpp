#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m, 0);
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int least = arr[m - 1] - arr[0];
    for (int i = 1; i <= m - n; i++)
    {
        if (arr[i + n - 1] - arr[i] < least)
            least = arr[i + n - 1] - arr[i];
    }

    cout << least << endl;
    return 0;
}