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

vector<int> primestill(int r)
{
    vector<int> ds;
    for (int i = 2; i <= r; i++)
    {
        if (primes[i])
            ds.push_back(i);
    }
    return ds;
}

int main()
{
    int t;
    cin >> t;
    sievegenerate();
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        vector<int> prime = primestill(sqrt(r));

        vector<bool> dummy(r - l + 1, 1);

        for (auto pr : prime)
        {
            int firstmultiple = (l / pr) * pr;
            if (firstmultiple < l)
                firstmultiple = firstmultiple + pr;
            for (int i = max(firstmultiple, pr * pr); i <= r; i += pr)
            {
                dummy[i - l] = 0;
            }
        }

        for (int i = l; i <= r; i++)
        {
            if (dummy[i - l] == 1)
                cout << i << " ";
        }
        cout << endl;
    }
}