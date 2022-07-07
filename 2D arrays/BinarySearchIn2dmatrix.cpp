#include <bits\stdc++.h>
using namespace std;

bool binary_search(vector<int> arr, int target)
{
    int lo = 0, hi = arr.size() - 1;
    for (int i = lo; i <= hi; i++)
        cout << arr[i] << " ";
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return false;
}

// approach 1 : Time complexity : O(Mlog(N))
// space complexity : O(1)
// bool searchMatrix(vector<vector<int>> &matrix, int target)
// {
//     int row = matrix.size(), col = matrix[0].size();
//     int j = 0;
//     bool flag = false;

//     for (int i = 0; i < row; i++)
//     {
//         if (matrix[i][j] <= target && matrix[i][col - 1] >= target)
//         {
//             if (binary_search(matrix[i], target))
//             {
//                 flag = true;
//                 break;
//             }

//             else
//                 j++;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return flag;
// }

// approach 2 : Time complexity : O(log(M*N))
// space complexity : O(M*N)

// bool searchMatrix(vector<vector<int>> &matrix, int target){

//     vector<int>mat;
//     for(int i = 0 ;i <matrix.size() ; i++){
//         for(int j = 0 ; j<matrix[0].size() ; j++){
//             mat.push_back(matrix[i][j]);
//         }
//     }

//     bool flag = binary_search(mat , target);
//     return flag ;
// }

// approach 3 : Time complexity : O(log(M*N))
// space complexity : O(1)

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int lo = 0, hi = row * col - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        int midelement = matrix[mid / col][mid / row];
        if (midelement == target)
            return true;
        else if (midelement > target)
            hi = mid - 1;
        else
            lo = mid + 1;
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
    cout << searchMatrix(matrix, target) << endl;
    ;
    return 0;
}