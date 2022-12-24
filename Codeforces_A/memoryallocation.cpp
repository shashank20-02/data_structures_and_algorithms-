#include <bits\stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;

    int **arr = new int *[row];
    int *pt = new int[row];

    for (int i = 0; i < row; i++)
    {
        int col;
        cin >> col;
        pt[i] = col;
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < pt[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < pt[i]; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[pt[i]];
    }

    delete[] pt;
    delete[] arr;
}