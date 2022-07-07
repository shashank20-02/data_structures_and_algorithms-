#include <bits\stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr[0].size();
    // vector<vector<int>> transpose(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
            swap(arr[i][j], arr[j][i]);
    }

    int lo = 0, hi = col - 1;

    while (lo < hi)
    {

        for (int i = 0; i < row; i++)
            swap(arr[i][lo], arr[i][hi]);

        lo++;
        hi--;
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

    rotate(arr);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}