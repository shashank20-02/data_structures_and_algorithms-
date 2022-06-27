#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxposs = 0, recloss = 0;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        recloss = (recloss - l) + r;
        maxposs = max(recloss, maxposs);
    }
    cout << maxposs << endl;
    return 0;
}