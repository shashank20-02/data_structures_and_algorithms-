#include <bits\stdc++.h>
using namespace std;

int romanToInt(string str)
{
    unordered_map<char, int> umap;
    umap.insert({'I', 1});
    umap.insert({'V', 5});
    umap.insert({'X', 10});
    umap.insert({'L', 50});
    umap.insert({'C', 100});
    umap.insert({'D', 500});
    umap.insert({'M', 1000});
    umap.insert({' ', 0});

    char prev = ' ';
    int num = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        char s = str[i];
        if (s == 'I' && prev == 'V')
        {
            num += 4;
            prev = ' ';
        }
        else if (s == 'I' && prev == 'X')
        {
            num += 9;
            prev = ' ';
        }
        else if (s == 'X' && prev == 'L')
        {
            num += 40;
            prev = ' ';
        }
        else if (s == 'X' && prev == 'C')
        {
            num += 90;
            prev = ' ';
        }
        else if (s == 'C' && prev == 'D')
        {
            num += 400;
            prev = ' ';
        }
        else if (s == 'C' && prev == 'M')
        {
            num += 900;
            prev = ' ';
        }
        else
        {
            num += umap[prev];
            prev = s;
        }
    }
    num += umap[prev];
    return num;
}

int main()
{
    string str;
    cin >> str;

    cout << romanToInt(str) << endl;
}