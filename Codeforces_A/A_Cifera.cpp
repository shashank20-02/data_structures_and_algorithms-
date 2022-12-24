#include <bits\stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;

    if (b % a == 0)
    {
        ll temp = a, count = 0;
        while (temp < b)
        {
            temp = temp * a;
            count++;
        }

        if (b == temp)
            cout << "YES" << endl
                 << count << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}