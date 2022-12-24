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
    bool flag = 0;
    int maxi = 0;
    unordered_map<int, int> umap;
    int temp = n;
    w(n)
    {
        int val;
        cin >> val;
        umap[val]++;
    }

    for (auto i : umap)
    {
        maxi = max(maxi, i.second);
    }
    // cout << maxi << endl;
    if ((temp % 2 == 1) && maxi > temp / 2 + 1)
        cout << "NO" << endl;
    else if ((temp % 2 == 0) && maxi > temp / 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}