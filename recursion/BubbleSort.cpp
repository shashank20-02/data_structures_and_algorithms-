#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    if (n == 1 || n == 0)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {1, 5, 2, 3, 4};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}