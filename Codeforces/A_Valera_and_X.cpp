#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<char> x, y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char val;
            cin >> val;
            if (i == j || i + j == n - 1)
                x.insert(val);
            else
                y.insert(val);
        }
    }

    if ((x.size() == 1 && y.size() == 1) && (*x.begin() != *y.begin()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}