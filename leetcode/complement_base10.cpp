#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, complement_num = 0, i = 0;
    cin >> n;
    while (n != 0)
    {
        int dig = n % 2;
        int bit = dig ^ 1;
        complement_num = (bit * pow(2, i)) + complement_num;
        n = n >> 1;
        i++;
    }

    cout << complement_num << endl;
    return 0;
}