#include <bits/stdc++.h>
using namespace std;

// int power(int x, int y)
// {
//     if (y == 0)
//         return 1;

//     int ans = x * power(x, y - 1);
//     return ans;
// }

int power(int x, int y)
{
    if (y == 0)
        return 1;

    int ans = power(x, y / 2);
    if (y & 1)
    {
        return ans * ans * x;
    }
    else
    {
        return ans * ans;
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
    return 0;
}