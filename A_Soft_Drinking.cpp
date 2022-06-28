#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tot1 = (k * l) / nl;
    int tot2 = c * d;
    int tot3 = p / np;

    int minx = min(tot1, tot2);
    int mini = min(tot3, minx);
    cout << mini / n << endl;
    return 0;
}