#include <bits\stdc++.h>
using namespace std;

// gcd of two {n , n+1} = 1 ;
// gcd of {n , n+1} = {n+1 , n+2} = 1 and {n , n+2} = 2 if n is even
//  gcd of {n , n+1} = 1 but {n , n+2} != 1 if n is even
//  failing cases - range is less than 3 and left is odd and range is less than 3

int main()
{
    long long int left, right;
    cin >> left >> right;

    long long range = right - (left - 1);

    if (range < 3 || (left % 2 == 1 && range < 4))
        cout << "-1" << endl;
    else
    {
        if (left % 2 == 0)
            cout << left << " " << left + 1 << " " << left + 2 << endl;

        else
            cout << left + 1 << " " << left + 2 << " " << left + 3 << endl;
    }
    return 0;
}