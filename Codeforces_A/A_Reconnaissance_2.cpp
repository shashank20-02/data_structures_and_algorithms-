#include <bits\stdc++.h>
#define v(name, n) vector<int> name(n, 0)
#define read(n, i) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    int n;
    cin >> n;
    v(arr, n);
    read(n, i)
    {
        cin >> arr[i];
    }

    int a, b, mini = 10001;

    if (abs(arr[0] - arr[n - 1]) < mini)
    {
        mini = abs(arr[0] - arr[n - 1]);
        a = n - 1;
        b = 0;
    }

    read(n - 1, i)
    {
        if (abs(arr[i] - arr[i + 1]) < mini)
        {
            mini = abs(arr[i] - arr[i + 1]);
            a = i;
            b = i + 1;
        }
    }

    cout << a + 1 << " " << b + 1 << endl;
    return 0;
}