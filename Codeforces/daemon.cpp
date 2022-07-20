#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt = 0, tem = 0;
    cin >> n >> m;

    if (n < m)
        cout << "-1" << endl;
    else
    {
        if (n % 2 == 0)
            cnt = n / 2;
        else if (n % 2 == 1)
            cnt = n / 2 + 1;
        if (cnt % m == 0)
            cout << cnt << endl;
        else
        {
            tem += m;
            while (tem < cnt)
                tem += m;
            cout << tem << endl;
        }
    }
}