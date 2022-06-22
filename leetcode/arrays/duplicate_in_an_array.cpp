#include <iostream>
using namespace std;

int main()
{
    int n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arr_sum = 0, sum = (n * (n - 1)) / 2, value;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
    }
    value = arr_sum - sum;
    cout << value << endl;
    return 0;
}