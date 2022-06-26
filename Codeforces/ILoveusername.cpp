#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int recmin = arr[1], recmax = arr[1];
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] > recmax)
        {
            count++;
            recmax = arr[i];
        }
        if (arr[i] < recmin)
        {
            count++;
            recmin = arr[i];
        }
    }
    cout << count << endl;
    return 0;
}