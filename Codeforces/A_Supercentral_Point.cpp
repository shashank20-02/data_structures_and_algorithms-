#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> nums(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(2, 0);
        cin >> temp[0] >> temp[1];
        nums[i] = temp;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = nums[i][0], y = nums[i][1];
        int left = 0, right = 0, up = 0, bottom = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int x1 = nums[j][0], y1 = nums[j][1];
                if (x1 > x && y1 == y)
                    right++;
                else if (x1 < x && y1 == y)
                    left++;
                else if (x1 == x && y1 > y)
                    up++;
                else if (x1 == x && y1 < y)
                    bottom++;
            }
        }
        if (left > 0 && right > 0 && up > 0 && bottom > 0)
            ans++;
    }

    cout << ans << endl;
    return 0;
}