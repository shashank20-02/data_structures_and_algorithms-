#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int count = 0;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
        }
    }
    count++;
    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}