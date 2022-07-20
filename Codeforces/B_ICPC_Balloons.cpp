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
        int freq[27] = {0};
        string str;
        cin >> str;

        for (int i = 0; i < n; i++)
        {
            freq[str[i] - 'A']++;
        }

        int count = 0;
        for (int i = 0; i < 27; i++)
        {
            if (freq[i])
                count += (freq[i] + 1);
        }
        cout << count << endl;
    }
    return 0;
}