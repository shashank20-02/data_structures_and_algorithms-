#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int count_arr[3] = {0};
    for (int i = 0; i < n; i++)
    {
        count_arr[arr[i]]++;
    }
    int i = 0;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < count_arr[j]; k++)
        {
            arr[i] = j;
            i++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[100];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        return 0;
    }
}