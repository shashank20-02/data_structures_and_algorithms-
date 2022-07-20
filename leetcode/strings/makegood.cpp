#include <bits\stdc++.h>
using namespace std;

string makeGood(string s)
{
    stack<char> s1;
    for (auto ch : s)
    {
        if (!(s1.empty()) || s1.top() == ch + 32 || s1.top() == ch - 32)
        {
            s1.pop();
        }
        else
            s1.push(ch);
    }
    string str = "";
    while (!s1.empty())
    {
        str += s1.top();
        s1.pop();
    }
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string str = "LeEetcode";
    cout << makeGood(str) << endl;
    return 0;
}