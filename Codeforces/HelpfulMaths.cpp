#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> strloop;

    for (int i = 0; i < str.length(); i += 2)
    {
        if (str[i] == '1')
            strloop.push_back(1);
        else if (str[i] == '2')
            strloop.push_back(2);
        else
            strloop.push_back(3);
    }

    sort(strloop.begin(), strloop.end());
    str = "";
    for (int i = 0; i < strloop.size(); i++)
    {
        if (strloop[i] == 1)
            str += '1';
        else if (strloop[i] == 2)
            str += '2';
        else
            str += '3';

        str += '+';
    }
    str[str.length() - 1] = ' ';
    cout << str << endl;
}