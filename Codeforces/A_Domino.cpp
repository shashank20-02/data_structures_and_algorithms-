#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int oddcount1 = 0, sum1 = 0, sum2 = 0, oddcount2 = 0;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x & 1)
            oddcount1++;
        if (y & 1)
            oddcount2++;
        sum1 += x;
        sum2 += y;
    }

    if (temp == 1 && ((oddcount1 == 1) || (oddcount2 == 1)))
    {
        cout << "-1" << endl;
    }

    else if (sum1 & 1 == 0 && sum2 & 1 == 0)
    {
        cout << "0" << endl;
    }
    else
        cout << min(oddcount1, oddcount2) << endl;
}