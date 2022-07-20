#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0, ans = 0;
    cin >> n >> k;
    while (n--)
    {
        string str;
        cin >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '4' || str[i] == '7')
                count++;
        }

        if (count <= k)
        {
            ans++;
        }
        count = 0;
    }
    cout << ans << endl;
}