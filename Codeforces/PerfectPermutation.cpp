#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> permutation(101, 0);

    for (int i = 1; i <= 100; i += 2)
    {
        permutation[i] = i + 1;
        permutation[i + 1] = i;
    }

    if (n % 2 == 1)
        cout << "-1" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}