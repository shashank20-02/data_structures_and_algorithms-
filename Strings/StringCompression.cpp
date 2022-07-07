#include <bits\stdc++.h>
using namespace std;

void groupapp(int &ans, int group, char lastchar, vector<char> &chars)
{
    if (group == 1)
    {
        chars[ans++] = lastchar;
    }

    else
    {
        chars[ans++] = lastchar;
        string gp = to_string(group);
        for (char ch : gp)
            chars[ans++] = ch;
    }

    // a b b b b b b b b b b b b
}

int main()
{
    int n;
    cin >> n;

    vector<char> chars(n, 0);
    for (int i = 0; i < n; i++)
        cin >> chars[i];

    int ans = 0;

    char lastchar = chars[0];
    int group = 1;
    for (int i = 1; i < n; i++)
    {
        if (chars[i] == lastchar)
        {
            group++;
        }
        else
        {
            groupapp(ans, group, lastchar, chars);
            lastchar = chars[i];
            group = 1;
        }
    }

    groupapp(ans, group, lastchar, chars);

    cout << ans << endl;
    return 0;
}