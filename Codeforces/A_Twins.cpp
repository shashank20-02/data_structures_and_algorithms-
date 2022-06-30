#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());
    int itersum = 0, minicoins = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        itersum += arr[i];
        sum -= arr[i];
        minicoins++;
        if (itersum > sum)
            break;
    }
    cout << minicoins << endl;
    return 0;
}