#include <bits/stdc++.h>
using namespace std;

// void reverseString(string &str, int l, int h)
// {
//     if (l > h)
//         return;

//     swap(str[l], str[h]);
//     l++;
//     h--;
//     reverseString(str, l, h);
// }

void reverseString(string &str, int i)
{
    if (i > str.length() / 2)
        return;

    swap(str[i], str[str.length() - i - 1]);
    i++;
    reverseString(str, i);
}
int main()
{
    string str;
    cin >> str;
    reverseString(str, 0);
    cout << str;
    return 0;
}