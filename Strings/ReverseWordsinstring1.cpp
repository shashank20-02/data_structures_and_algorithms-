#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    vector<string> arr;
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || i == str.length())
        {
            arr.push_back(temp);
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }

    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        temp += arr[i];
        temp += ' ';
    }

    cout << temp << endl;
    return 0;
}