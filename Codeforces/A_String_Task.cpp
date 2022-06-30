#include <bits\stdc++.h>
using namespace std;

//  "A", "O", "Y", "E", "U", "I"
int main()
{
    string str, ans = "";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
        if ((str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'))
        {
            string temp = "";
            temp += '.';
            temp += str[i];
            ans += temp;
        }
    }
    cout << ans << endl;
    return 0;
}