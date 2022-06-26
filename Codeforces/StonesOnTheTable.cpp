#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (str[j] == str[j + 1])
            count++;
    }

    cout << count << endl;
    return 0;
}