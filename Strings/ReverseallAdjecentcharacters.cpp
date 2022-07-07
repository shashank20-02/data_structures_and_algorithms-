#include <bits\stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (st.empty())
            st.push_back(str[i]);
        else if (st.back() == str[i])
            st.pop_back();
        else
            st.push_back(str[i]);
    }

    string ans(st.begin(), st.end());
    cout << ans << endl;
    return 0;
}