#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<char>> mat(n, vector<char>(m))
#define w(n) while (n--)
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<char, int> umap;

    read(4, i)
    {
        read(4, j)
        {
            char val;
            cin >> val;

            umap[val]++;
        }
    }
    bool flag = 0;
    n = 2 * n;
    for (auto i : umap)
    {
        if (i.second > n && i.first != '.')
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "YES" << endl;
    return 0;
}