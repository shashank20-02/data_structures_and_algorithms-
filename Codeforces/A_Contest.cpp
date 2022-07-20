#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sc1 = max((3 * a) / 10, a - (a / 250) * c);
    int sc2 = max((3 * b) / 10, b - (b / 250) * d);
    if (sc1 > sc2)
        cout << "Misha" << endl;
    else if (sc1 < sc2)
        cout << "Vasya" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}