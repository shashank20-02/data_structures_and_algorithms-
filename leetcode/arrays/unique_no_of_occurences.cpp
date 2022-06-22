#include <bits/stdc++.h>
using namespace std;

bool unique_no_of_occurances(vector<int> arr)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < arr.size(); i++)
    {
        umap[arr[i]]++;
    }

    unordered_map<int, int> second_map;
    for (auto i : umap)
    {
        second_map[i.second]++;
    }

    return (umap.size() == second_map.size());
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << unique_no_of_occurances(arr) << endl;
    return 0;
}