#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    ll level = s.find('^');
    ll left = 0, right = 0;
    for (int k = 0; k < level; k++)
    {
        if (s[k] != '=')
        {
            left += (level - k) * (s[k] - '0');
        }
    }
    for (int k = level + 1; k < s.size(); k++)
    {
        if (s[k] != '=')
        {
            right += (k - level) * (s[k] - '0');
        }
    }
    if (left == right)
        cout << "balance";
    else if (left > right)
        cout << "left";
    else
        cout << "right";
    return 0;
}