#include <bits\stdc++.h>
using namespace std;

double eps = 1e-6;

double squareroot(double n)
{
    double lo = 1, hi = n;
    while (hi - lo > eps)
    {
        double mid = (lo + hi) / 2;
        if (mid * mid < n)
            lo = mid;
        else
            hi = mid;
    }

    return lo;
}

int main()
{
    double n;
    cin >> n;
    cout << squareroot(n) << endl;
    return 0;
}