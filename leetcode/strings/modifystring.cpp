#include <bits\stdc++.h>
using namespace std;

string modifyString(string s)
{
    vector<int> freq(27, 0);

    for (auto ch : s)
    {
        freq[ch - 'a']++;
    }
    vector<char> ab;
    for (int i = 0; i < 27; i++)
    {
        if (freq[i] == 0)
        {
            ab.push_back(i + 'a');
        }
    }

    int k = 0;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?' && k < ab.size())
        {
            str += ab[k++];
        }
        else
            str += s[i];
    }
    return str;
}

int main()
{

    cout << modifyString("ubv?w") << endl;
}
