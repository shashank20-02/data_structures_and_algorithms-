#include <bits\stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> umap;
    int mini = 10001, minindex = 0, maxi = 0, maxindex = 0;
    for (int i = 0; i < 4; i++)
    {
        string str;
        cin >> str;
        umap[str] = str.length() - 2;
        if (mini > str.length() - 2)
        {
            minindex = i;
            mini = str.length() - 2;
        }
        if (maxi < str.length() - 2)
        {
            maxindex = i;
            maxi = str.length() - 2;
        }
    }

    bool flag = false;
    int count = 0;
    for (auto i : umap)
    {
        if (i.second > 2 * mini && i.second != mini)
        {
            count++;
        }
    }

    if (count == 3)
    {
        flag = 1;
        char ans = 'A' + minindex;
        cout << ans << endl;
        return 0;
    }

    else if (flag == 0)
    {
        count = 0;
        for (auto i : umap)
        {
            if (i.second * 2 < maxi && i.second != maxi)
            {
                count++;
            }
        }
        if (count == 3)
        {
            flag = 1;
            char ans = 'A' + maxindex;
            cout << ans << endl;
            return 0;
        }
        else if (count != 3 && flag == 0)
        {
            cout << "c here" << endl;
        }
    }

    return 0;
}