#include <bits/stdc++.h>
using namespace std;

void shuffle(int arr[], int n)
{
}

int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // shuffle(arr, n);
    for (int i = 1; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i + n / 2 - 1];
        arr[i + n / 2 - 1] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}