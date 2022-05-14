#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, set_bit = 0;
    cin >> n;
    while (n != 0)
    {
        set_bit++;
        n = n & (n - 1);
    }
    if (set_bit == 1)
        cout << "Yes"
             << " ";
    else
        cout << "No"
             << " ";
    return 0;
}