#include <bits\stdc++.h>
using namespace std;

vector<bool> seive(51, 1);

int main()
{
    int n, m;
    cin >> n >> m;
    seive[0] = seive[1] = false;
    for (int i = 2; i <= 50; i++)
    {
        if (seive[i] == 1)
        {
            for (int j = 2 * i; j <= 51; j += i)
            {
                seive[j] = 0;
            }
        }
    }
    int count = 0;
    for (int i = n + 1; i < m; i++)
    {
        if (seive[i] == 1)
            count++;
    }
    if (count == 0 && seive[m])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}