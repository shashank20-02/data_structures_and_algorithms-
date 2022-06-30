#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> days(7, 0);

    for (int i = 0; i < 7; i++)
    {
        cin >> days[i];
    }
    int lastday = 0;
    int temp = days[0];

    while (temp < n)
    {
        lastday++;
        lastday %= 7;
        temp += days[lastday];
    }
    cout << lastday + 1 << endl;
    return 0;
}