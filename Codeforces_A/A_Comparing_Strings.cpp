#include <bits\stdc++.h>
#define v(name, n) vector<int> name(n, 0)
#define read(n, i) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    int freq[27] = {0}, freq2[27] = {0};
    string str, str2;
    cin >> str >> str2;

    if (str.length() != str2.length())
    {
        cout << "NO" << endl;
        return 0;
    }

    read(str.length(), i)
    {
        freq[str[i] - 'a']++;
    }
    read(str2.length(), i)
    {
        freq2[str2[i] - 'a']++;
    }
    bool ans = true;
    read(27, i)
    {
        if (freq[i] != freq2[i])
        {
            ans = false;
            break;
        }
    }
    if (ans == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}