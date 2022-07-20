#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0), first, second, zero;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zero.push_back(arr[i]);
        }
        else if (arr[i] > 0)
            second.push_back(arr[i]);
        else
            first.push_back(arr[i]);
    }

    if (second.size() == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            second.push_back(first.back());
            first.pop_back();
        }
    }

    if (first.size() % 2 == 0)
    {
        zero.push_back(first.back());
        first.pop_back();
    }

    cout << first.size() << " ";

    for (int i = 0; i < first.size(); i++)
        cout << first[i] << " ";
    cout << endl;

    cout << second.size() << " ";

    for (int i = 0; i < second.size(); i++)
        cout << second[i] << " ";
    cout << endl;

    cout << zero.size() << " ";

    for (int i = 0; i < zero.size(); i++)
        cout << zero[i] << " ";
    cout << endl;

    return 0;
}