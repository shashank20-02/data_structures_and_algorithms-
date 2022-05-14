#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the value of key" << endl;
    cin >> key;
    cout << linear_search(arr, n, key) << endl;

    return 0;
}