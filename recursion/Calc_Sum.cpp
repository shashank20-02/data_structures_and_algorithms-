#include <bits\stdc++.h>
using namespace std;

int sum(int arr[], int n, int ans)
{
    if (n == 1)
        return ans + arr[0];

    return sum(arr + 1, n - 1, ans + arr[0]);
}

int main()
{

    int n, arr[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr, n, 0) << endl;

    return 0;
}