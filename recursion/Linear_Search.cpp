#include <bits\stdc++.h>
using namespace std;

bool LinearSearch(int *arr, int n, int key)
{
    if (n == 1)
    {
        if (key == arr[0])
            return true;
        else
            return false;
    }
    if (arr[0] == key)
        return true;
    else
        return LinearSearch(arr + 1, n - 1, key);
}

int main()
{

    int n, arr[1000] = {0}, key;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;
    cout << LinearSearch(arr, n, key) << endl;
    return 0;
}