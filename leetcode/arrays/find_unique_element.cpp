#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int xor_sum = 0;
    for (int i = 0; i < n; i++)
        xor_sum = arr[i] ^ xor_sum;

    cout << xor_sum << endl;
}