#include <bits\stdc++.h>
using namespace std;
#define dl double long

const dl eps = 1e-5;
const dl Pie = 3.141592653589793238;

void debug(dl something)
{
    cout << something << endl;
}

bool ispossible(vector<dl> pie, int n, int f, dl mid)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += (int)floor(pie[i] / mid);
        if (count >= f + 1)
            return true;
    }
    return (count >= f + 1);
}

dl pies(vector<dl> pie, int n, int f)
{
    dl lo = 0, hi;
    dl maxi = -1;
    for (int i = 0; i < n; i++)
        maxi = max(maxi, pie[i]);
    dl ans = -1;
    hi = maxi;

    while (hi - lo > eps)
    {
        dl mid = lo + (hi - lo) / 2;
        if (ispossible(pie, n, f, mid))
        {
            lo = mid + eps;
            ans = mid;
        }
        else
            hi = mid - eps;
    }
    return ans;
}

// 2π r h + 2π r²

int main()
{
    int n, f;
    cin >> n >> f;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<dl> arrup(n, 0);
    for (int i = 0; i < n; i++)
    {
        arrup[i] = (Pie * arr[i] * arr[i]);
    }

    cout << fixed << setprecision(4) << pies(arrup, n, f)
         << endl;
    return 0;
}