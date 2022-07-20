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
        string str, ans = "";
        set<string> s1;
        vector<string> st;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            s1.insert(str);
            st.push_back(str);
        }

        for (int i = 0; i < n; i++)
        {
            string temp = st[i];
            bool flag = 0;
            for (int j = 1; j < temp.size(); j++)
            {
                string st1 = temp[0] + temp.substr(1, j - 1);
                string st2 = temp.substr(j);
                auto pos1 = s1.find(st1);
                auto pos2 = s1.find(st2);
                if (pos1 != s1.end() && pos2 != s1.end())
                {
                    ans += '1';
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                ans += '0';
        }
        cout << ans << endl;
    }
    return 0;
}