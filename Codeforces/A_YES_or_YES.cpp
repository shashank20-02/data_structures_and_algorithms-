#include <bits\stdc++.h>
using namespace std;

string ret(string str)
{
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    return str;
}

int main()
{
    int n;
    cin >> n;
    string str = "yes";
    while (n--)
    {
        string temp;
        cin >> temp;
        temp = ret(temp);
        if (temp == str)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}