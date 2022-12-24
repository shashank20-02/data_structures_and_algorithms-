#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int p;
        cin >> p;
        int sum = 0, ind = 0;
        char mini = 'a';
        for (int i = 0; i < str.length(); i++)
        {
            sum += (str[i] - 'a');
            if (str[i] > mini)
            {
                ind = i;
                mini = str[i];
            }
        }

        while (sum >= p && str.length())
        {
            int st = (mini - 'a') + 1;
            sum -= st;
            mini = 'a';
            str.erase(str.begin() + ind);
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] > mini)
                {
                    ind = i;
                    mini = str[i];
                }
            }
        }
        cout << str << endl;
    }
}