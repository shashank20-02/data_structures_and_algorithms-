#include <bits\stdc++.h>
using namespace std;

int main()
{
    int arr[14] = {4, 7, 44, 47, 74, 77, 447, 474, 477, 444, 744, 747, 774, 777};

    int n;
    cin >> n;
    bool istrue = false;
    for (int i = 0; i < 14; i++)
    {
        if (n % arr[i] == 0)
        {
            istrue = true;
            break;
        }
    }
    if (istrue == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}