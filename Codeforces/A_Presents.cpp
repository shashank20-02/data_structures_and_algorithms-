#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0), ans(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[j] == i)
                ans[i] = j;
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}