#include <bits\stdc++.h>
using namespace std;

string Toupper(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ans += toupper(str[i]);
        }
        else
            ans += str[i];
    }
    return ans;
}
string Tolower(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ans += tolower(str[i]);
        }
        else
            ans += str[i];
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;

    int u_count = 0, l_count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            l_count++;
        else
            u_count++;
    }
    if (u_count > l_count)
        str = Toupper(str);
    else if (l_count > u_count)
        str = Tolower(str);
    else
        str = Tolower(str);

    cout << str << endl;

    return 0;
}