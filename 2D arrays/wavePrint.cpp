#include <bits\stdc++.h>
using namespace std;

void printwave(vector<vector<int>> arr, int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
                cout << arr[j][i] << " ";
        }
        else
            for (int j = row - 1; j >= 0; j--)
                cout << arr[j][i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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

        printwave(arr, row, col);
    }
    return 0;
}