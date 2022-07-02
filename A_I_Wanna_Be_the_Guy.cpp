#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int p, q;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    sort(arr.begin(), arr.end());

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i)
            {
                count++;
                break;
            }
        }
    }
    if (count == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}