#include <bits\stdc++.h>
using namespace std;

void debug(int x)
{
    cout << x << endl;
}

void InsertionSort(vector<int> &arr, int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = temp;
        if (count == 0)
            return;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}