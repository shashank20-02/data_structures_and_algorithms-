#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int minl, minr, countl0 = 0, countl1 = 0, countr0 = 0, countr1 = 0;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
            countl0++;
        if (l == 1)
            countl1++;
        if (r == 0)
            countr0++;
        if (r == 1)
            countr1++;
    }

    minl = min(countl0, countl1);
    minr = min(countr0, countr1);
    cout << minl + minr << endl;
    return 0;
}