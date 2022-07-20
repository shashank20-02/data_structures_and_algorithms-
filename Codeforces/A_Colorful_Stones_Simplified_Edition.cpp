#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int t = str2.length(), i = 0;
    int pos = 1;
    while (i != t)
    {
        if (str1[pos - 1] == str2[i])
            pos++;
        i++;
    }

    cout << pos << endl;
}