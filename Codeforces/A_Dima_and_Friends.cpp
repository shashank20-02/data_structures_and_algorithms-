#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    temp = n;
    int sum = 0;
    while (n--)
    {
        int x;
        cin >> x;
        sum += x;
    }

    int answer = 0;

    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i) % (temp + 1) != 1)
            answer += 1;
    }
    cout << answer << endl;

    return 0;
}