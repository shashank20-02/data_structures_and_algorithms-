#include <bits\stdc++.h>
using namespace std;

void rowwisesum(vector<vector<int>> &arr, int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
}

void colwisesum(vector<vector<int>> &arr, int row, int col)
{
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }

        cout << sum << endl;
        sum = 0;
    }
}

int main()
{
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

    colwisesum(arr, row, col);
    return 0;
}