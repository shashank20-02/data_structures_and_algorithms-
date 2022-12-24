#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<char>> mat(n, vector<char>(m))

#define ll long long
using namespace std;

int main()
{
    unordered_map<string, int> umap;
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        umap[str]++;
    }
    int maxi = 0;
    string ans;
    for (auto i : umap)
    {
        if (i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
    }
    cout << ans << endl;
    return 0;
}