#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> arr1(n, 0);
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    // approach 1:
    // sort(arr1.begin(), arr1.end());

    // int i = 0, j = n - 1;
    // while (i <= j)
    // {
    //     int sum = arr1[i] + arr1[j];
    //     if (sum == s)
    //     {
    //         vector<int> temp;
    //         temp.push_back(arr1[i]);
    //         temp.push_back(arr1[j]);
    //         ans.push_back(temp);
    //         i++;
    //         j++;
    //     }
    //     else if (sum > s)
    //         j--;
    //     else
    //         i++;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] + arr1[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr1[i], arr1[j]));
                temp.push_back(max(arr1[i], arr1[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}