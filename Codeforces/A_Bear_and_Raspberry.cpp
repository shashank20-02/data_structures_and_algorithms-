#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxprofit = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int val = arr[i] - arr[i + 1] - c;
        maxprofit = max(maxprofit, val);
    }
    cout << maxprofit << endl;
}