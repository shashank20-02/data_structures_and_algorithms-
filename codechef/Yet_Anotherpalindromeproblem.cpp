#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        string a = "", b = "";
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                b += str[i];
            else
                a += str[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}