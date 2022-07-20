#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, d, sum = 0;
    cin >> n >> d;
    int arr[101] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int tot = sum + (n - 1) * 10;
    if (tot > d)
        cout << "-1" << endl;
    else if (tot == d)
        cout << "0" << endl;
    else
    {
        int tt = (n - 1) * 2 + (d - tot) / 5;
        cout << tt << endl;
    }
}