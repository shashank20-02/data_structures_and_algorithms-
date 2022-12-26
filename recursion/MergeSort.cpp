#include <bits/stdc++.h>
using namespace std;
// approach 1 - Using Two Arrays.
void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
        second[i] = arr[mainIndex++];

    int start1 = 0, start2 = 0;
    mainIndex = s;
    while (start1 < len1 && start2 < len2)
    {
        if (first[start1] < second[start2])
            arr[mainIndex++] = first[start1++];
        else
            arr[mainIndex++] = second[start2++];
    }

    while (start1 < len1)
        arr[mainIndex++] = first[start1++];
    while (start2 < len2)
        arr[mainIndex++] = second[start2++];

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}