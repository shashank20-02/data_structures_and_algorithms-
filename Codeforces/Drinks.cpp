#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double volume = 0.0, fraction = 0.0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        double fr = val / 100.0;
        volume += fr;
    }

    fraction = ((double)volume / n) * 100;
    cout << fixed << setprecision(12) << fraction << endl;
}