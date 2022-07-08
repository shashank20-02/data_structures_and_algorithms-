#include <bits\stdc++.h>
using namespace std;

int n = 1000;
vector<int> primes(n + 1, 1);

void sieve()
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

int primefactor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 && primes[i])
            return i;
    }
}

int main()
{
    int n;
    cin >> n;
    sieve();
    vector<int> nums(n, 0);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int turns = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1 || primes[nums[i]])
            continue;

        else
        {
            turns++;
            int temp = primefactor(nums[i]);
            nums[i] = temp;
        }
    }

    if (turns & 1)
        cout << "A" << endl;
    else
        cout << "B" << endl;

    return 0;
}