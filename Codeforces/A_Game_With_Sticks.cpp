#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m, edges = 0;
    cin >> n >> m;
    edges = n * m;
    int turns = 0;
    while (edges != 0)
    {
        turns++;
        edges = edges - (n + m - 1);
        n--;
        m--;
    }
    if (turns % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;

    return 0;
}