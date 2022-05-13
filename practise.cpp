#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k = 1;
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << j << " ";

        for (int j = i; j >= 1; j--)
            cout << "*"
                 << " ";

        for (int j = i; j >= 1; j--)
            cout << "*"
                 << " ";

        for (int j = n - i; j >= 1; j--)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}

// output :
// 1 2 3 4 5 6 6 5 4 3 2 1
// 1 2 3 4 5 * * 5 4 3 2 1
// 1 2 3 4 * * * * 4 3 2 1
// 1 2 3 * * * * * * 3 2 1
// 1 2 * * * * * * * * 2 1
// 1 * * * * * * * * * * 1