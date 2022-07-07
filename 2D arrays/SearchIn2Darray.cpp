#include <bits\stdc++.h>
using namespace std;

bool SearchInArray(int arr[][4], int key, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}

bool search(vector<vector<int>> &arr, int key, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}

int main()
{
    // int row = 3, col = 4;
    // int arr[3][4];

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // int key;
    // cin >> key;
    // cout << SearchInArray(arr, key, row, col) << endl;

    int row, col;
    cin >> row >> col;

    vector<vector<int>> arr;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp(col, 0);
        for (int j = 0; j < col; j++)
        {
            cin >> temp[j];
        }
        arr.push_back(temp);
    }

    int key;
    cin >> key;

    cout << search(arr, key, row, col) << endl;

    return 0;
}