#include <bits\stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> Matrix;
    int cox, coy;
    for (int i = 0; i < 5; i++)
    {
        vector<int> temp(5, 0);
        for (int j = 0; j < 5; j++)
        {
            cin >> temp[j];
            if (temp[j] == 1)
            {
                cox = i;
                coy = j;
            }
        }
        Matrix.push_back(temp);
    }
    cox++;
    coy++;
    cout << (abs(cox - 3) + abs(coy - 3)) << endl;
    return 0;
}