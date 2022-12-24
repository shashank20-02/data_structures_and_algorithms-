#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, count = 0;
        cin >> n;
        vector<int> arr(n, 0), freq(n + 1, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[arr[i]] == 0)
            {
                freq[arr[i]]++;
                count++;
            }
            else if (freq[arr[i]] > 0)
                break;
        }

        cout << n - count << endl;
    }

    return 0;
}