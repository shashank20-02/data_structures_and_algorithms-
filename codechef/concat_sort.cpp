#include <iostream>
#include <vector>
#include <algorithm>
#define s(arr) sort(arr.begin(), arr.end())

#define p(arr)                           \
    for (int i = 0; i < arr.size(); i++) \
        cout << arr[i] << " ";           \
    cout << endl;
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << "YES" << endl;
            break;
        }
        vector<ll> arr(n, 0), larger, temp;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        temp = arr;
        s(arr);
        if (temp == arr)
        {
            cout << "YES" << endl;
            break;
        }
        int k = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == arr[k])
                k++;
            else
                larger.push_back(temp[i]);
        }
        bool ans = false;
        for (int i = 0; i < larger.size() - 1; i++)
        {
            if (larger[i] > larger[i + 1])
            {
                ans = true;
                break;
            }
        }

        if (ans == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}