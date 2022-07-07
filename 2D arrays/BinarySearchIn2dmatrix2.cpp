#include <bits\stdc++.h>
using namespace std;

// 1,4,7,11,15
// 2,5,8,12,19
// 3,6,9,16,22
// 10,13,14,17,24
// 18,21,23,26,30

// to find the monotonicity in the search space we can start searching from either 15 or 18 because by using 15 or 18 we can clearly decide where to move after comparing with target but if we start with 1 or 30 if we choose 1 then we cant decide if target is greater than one and so with if we choose 30 and compare it with target and target is lesser than 30 then we can't decide where to move.

// using last value i.e. 18 for comparing
// analysis: Time complexity : O(log(M*N))
// Space complexity:O(1)
bool searchMatrix1(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size();
    int rowindex = row - 1, colindex = 0;
    while (rowindex >= 0 && colindex < col)
    {
        int element = matrix[rowindex][colindex];
        if (element == target)
            return true;
        else if (element < target)
            colindex++;
        else
            rowindex--;
    }
    return false;
}

bool searchMatrix2(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size();
    int rowindex = 0, colindex = col - 1;
    while (rowindex < row && colindex >= 0)
    {
        int element = matrix[rowindex][colindex];
        if (element == target)
            return true;
        else if (target > element)
            rowindex++;
        else
            colindex--;
    }
    return false;
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;
    cout << searchMatrix1(matrix, target) << endl;

    return 0;
}