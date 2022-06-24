#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y = n;
    while (true)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y << endl;
            break;
        }
    }
    return 0;
}