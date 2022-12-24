#include <bits\stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    string bef4 = "O-|", aft4 = "-O|";
    if (n == 0)
        cout << "O-|-OOOO" << endl;
    while (n > 0)
    {
        ll rem = n % 10;
        if (rem <= 4)
        {
            string temp = "";
            for (int i = 0; i < rem; i++)
                temp += 'O';
            temp += '-';
            for (int i = rem + 1; i <= 4; i++)
                temp += 'O';
            temp = bef4 + temp;
            cout << temp << endl;
        }
        else
        {
            string temp = "";
            rem = rem - 5;
            for (int i = 0; i < rem; i++)
                temp += 'O';
            temp += '-';
            for (int i = rem + 1; i <= 4; i++)
                temp += 'O';
            temp = aft4 + temp;
            cout << temp << endl;
        }
        n /= 10;
    }
    return 0;
}