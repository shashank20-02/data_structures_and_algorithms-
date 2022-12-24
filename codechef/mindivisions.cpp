#include <bits\stdc++.h>

#define read(n, i) for (int i = 0; i < n; i++)
#define arr(n) vector<int> arr(n, 0)
#define mat(n, m) vector<vector<int>> mat(n, vector<int>(m))
#define w(n) while (n--)
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    w(t)
    {
        unordered_map<int, int> umap;
        int n;
        cin >> n;
        int mini = 1000001;
        read(n, i)
        {
            int val;
            cin >> val;
            umap[val]++;
            mini = min(mini, val);
        }

        cout << umap[mini] << endl;
    }

    return 0;
}