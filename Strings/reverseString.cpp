#include <bits\stdc++.h>
using namespace std;

string approach1(string &str)
{
    string ans = "";
    for (int i = str.length() - 1; i >= 0; i--)
        ans += str[i];

    return ans;
}

void approach2(string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

int main()
{
    string str;
    cin >> str;
    string ans = approach1(str);
    cout << ans << endl;
    approach2(str);
    cout << str << endl;
    return 0;
}