#include <bits\stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s)
{
    unordered_map<char, string> umap;
    int i = 0;
    for (auto str : pattern)
    {
        string ant = "";
        while (s[i] != ' ' && i < s.length())
        {
            ant += s[i];
            i++;
        }
        i++;
        umap.insert({str, ant});
    }
    string ref = "";
    for (int i = 0; i < pattern.size(); i++)
    {
        ref += umap[pattern[i]];
        if (i != pattern.size() - 1)
            ref += ' ';
    }

    return (s == ref);
}

int main()
{
    string s, pattern;
    getline(cin, s);
    cin >> pattern;

    cout << wordPattern(pattern, s) << endl;
    return 0;
}