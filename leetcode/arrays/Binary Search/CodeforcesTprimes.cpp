#include <bits\stdc++.h>
using namespace std;

#define ull unsigned long long

const ull int N = 1e6;

vector<bool> seive(N, 1);

set<ull> sieve_up;

int main()
{
    long long n;
    cin >> n;

    seive[0] = seive[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (seive[i] == 1)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                seive[j] = 0;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (seive[i])
            sieve_up.insert(i * i);
    }

    for (int i = 0; i < n; i++)
    {
        ull val;
        cin >> val;

        ull a = sqrt(val);
        if (sieve_up.find(val) != sieve_up.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}