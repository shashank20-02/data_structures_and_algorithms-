#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 0, i = 0;
    while (counter < n / 2)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // {1 , 2, 3 , 4 , 5}
    return 0;
}