#include <bits\stdc++.h>
using namespace std;

int BinarySearch(int *arr, int s, int e, int key)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return BinarySearch(arr, s, mid - 1, key);
    else
        return BinarySearch(arr, mid + 1, e, key);
}

int main()
{
    int n, arr[1000] = {0}, key;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;
    cout << BinarySearch(arr, 0, n - 1, key) << endl;
    return 0;
}