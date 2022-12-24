#include <bits/stdc++.h>
using namespace std;

bool palindromeString(string str, int l, int h)
{
    if (l > h)
        return true;

    if (str[l] == str[h])
    {
        l++;
        h--;
        return palindromeString(str, l, h);
    }

    else
    {
        return false;
    }
}

int main()
{
    string str;
    cin >> str;
    cout << palindromeString(str, 0, str.length() - 1);
    return 0;
}