#include <bits\stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1, j = m - 1, carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int val = a[i] + b[j] + carry;
        if (val >= 10)
        {
            carry = val / 10;
            int temp = val % 10;
            ans.push_back(temp);
        }
        else
        {
            carry = 0;
            ans.push_back(val);
        }
        i--;
        j--;
    }

    while (i >= 0)
    {
        int val = a[i] + carry;
        if (val >= 10)
        {
            carry = val / 10;
            int temp = val % 10;
            ans.push_back(temp);
        }
        else
        {
            carry = 0;
            ans.push_back(val);
        }
        i--;
    }

    while (j >= 0)
    {
        int val = b[j] + carry;
        if (val >= 10)
        {
            carry = val / 10;
            int temp = val % 10;
            ans.push_back(temp);
        }
        else
        {
            carry = 0;
            ans.push_back(val);
        }
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<int> arr1(m);
        vector<int> arr2(n);
        for (int i = 0; i < m; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        vector<int> ans = findArraySum(arr1, m, arr2, n);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }

    return 0;
}