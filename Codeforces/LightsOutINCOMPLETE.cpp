#include <bits\stdc++.h>
using namespace std;

void toggle(bool n)
{
    n = !n;
}

int Matrix[5][5] = {1};

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int val;
            cin >> val;
            if (val % 2 == 1)
            {
                toggle(Matrix[i][j]);
                toggle(Matrix[i][j + 1]);
                toggle(Matrix[i][j - 1]);
                toggle(Matrix[i + 1][j]);
                toggle(Matrix[i - 1][j]);
            }
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}