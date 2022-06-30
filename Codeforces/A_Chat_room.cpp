#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str1, str2 = "hello";
    cin >> str1;
    int res = 0, j = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
            res++;
            if (res == 5)
                break;
        }
    }
    if (res == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}