#include <bits\stdc++.h>
using namespace std;

const int n = 1000000;
vector<bool> primes(n + 1, 1);

void sievegenerate()
{
    primes[0] = primes[1] = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j < n; j += i)
                primes[j] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    // Time Complexity: O(N*Log(Log(N)))
    // Space complexity :O(N)
    sievegenerate();

    for (int i = 2; i < n; i++)
    {
        if (primes[i])
            cout << i << " ";
    }

    return 0;
}