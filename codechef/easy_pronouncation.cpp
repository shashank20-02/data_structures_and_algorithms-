#include <bits\stdc++.h>
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

        int maxstr = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                maxstr = max(maxstr, count);
                count = 0;
            }
            else
            {
                count++;
            }
        }
        maxstr = max(maxstr, count);

        if (maxstr >= 4)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}