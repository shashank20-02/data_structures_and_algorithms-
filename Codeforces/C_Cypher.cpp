#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[101] = {0};
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int st;
            cin >> st;
            string str;
            cin >> str;

            for (int j = 0; j < st; j++)
            {
                if (str[j] == 'D')
                    a[i]++;
                else
                {
                    if (a[i] == 0)
                        a[i] = 10;

                    a[i]--;
                }
            }
            a[i] = a[i] % 10;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}