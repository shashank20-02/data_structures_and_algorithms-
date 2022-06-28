#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    str1 = str1 + str2;
    sort(str1.begin(), str1.end());
    sort(str3.begin(), str3.end());

    if (str1.length() == str3.length())
    {
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1[i] != str3[i])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
}