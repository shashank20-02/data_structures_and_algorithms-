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

        if (n <= 9)
        {
            cout << n << endl;
        }
        else
        {
            int lastans = 9;
            vector<int> ans;
            while (n > 0)
            {
                if (n - lastans > 0)
                {
                    ans.push_back(lastans);
                    n = n - lastans;
                    lastans--;
                }
                else
                {
                    ans.push_back(n);
                    n = 0;
                }
            }
            string ans_t;
            for (int i = ans.size() - 1; i >= 0; i--)
            {
                ans_t += to_string(ans[i]);
            }
            cout << ans_t << endl;
        }
    }
    return 0;
}