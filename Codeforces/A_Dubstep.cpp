#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str, ans = "";
    cin >> str;
    int spacecount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            if (ans.length() != 0 && spacecount == 0)
            {
                ans += ' ';
                spacecount++;
            }
            i += 2;
        }
        else
        {
            ans += str[i];
            spacecount = 0;
        }
    }
    cout << ans << endl;
    return 0;
}