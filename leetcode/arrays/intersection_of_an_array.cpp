#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    // approach 1 - getting time limit exceeded
    // while (t--)
    // {
    //     int n, m, arr1[1000], arr2[1000];
    //     vector<int> ansArray;
    //     cin >> n >> m;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr1[i];
    //     }
    //     for (int i = 0; i < m; i++)
    //     {
    //         cin >> arr2[i];
    //     }

    //     int i_nt = 0;
    //     if (n < m)
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //             for (int j = i_nt; j < m; j++)
    //             {
    //                 if (arr1[i] == arr2[j])
    //                 {
    //                     ansArray.push_back(arr1[i]);
    //                     i_nt = j + 1;
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    //     else
    //     {
    //         for (int i = 0; i < m; i++)
    //         {
    //             int key = arr2[i];
    //             for (int j = i_nt; j < n; j++)
    //             {
    //                 if (arr1[j] == key)
    //                 {
    //                     ansArray.push_back(key);
    //                     i_nt = j + 1;
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    //     if (ansArray.size() == 0)
    //         cout << "-1"
    //              << " ";
    //     else
    //     {
    //         for (int i = 0; i < ansArray.size(); i++)
    //         {
    //             cout << ansArray[i] << " ";
    //         }

    //         cout << endl;
    //     }
    // }

    // approach 2 : 2 pointer approach
    while (t--)
    {
        int n, m, arr1[1000], arr2[1000];
        vector<int> ansArray;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
                i++;
            else if (arr1[i] == arr2[j])
            {
                ansArray.push_back(arr1[i]);
                i++;
                j++;
            }
            else
                j++;
        }
        if (ansArray.size() == 0)
            cout << "-1"
                 << " ";
        else
        {
            for (int i = 0; i < ansArray.size(); i++)
            {
                cout << ansArray[i] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}