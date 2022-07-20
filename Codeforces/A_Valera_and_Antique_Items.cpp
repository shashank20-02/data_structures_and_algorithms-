#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    int count = 0;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int vt;
        cin >> vt;
        vector<int> temp;
        while (vt--)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        sort(temp.begin(), temp.end());

        if (temp[0] < v)
        {
            count++;
            ans.push_back(i);
        }
    }

    cout << count << endl;
    for (int i = 0; i < count; i++)
        cout << ans[i] << " ";
    return 0;
}