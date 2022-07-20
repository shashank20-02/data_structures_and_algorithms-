#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int min = 0, pos = 1;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
        {
            min += r;
            pos = r;
        }
        else
        {
            int lem = l % x;
            min += lem + (r - l);
            pos = r + 1;
        }
    }
    cout << min << endl;
    return 0;
}