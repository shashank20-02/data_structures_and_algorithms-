#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, count1 = 0, count2 = 0, count3 = 0;
    int arr[5001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
        else
            count3++;
    }

    int id = min({count1, count2, count3});
    count1 = count2 = count3 = 0;
    cout << id << endl;
    while (id > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1 && count1 == 0)
            {
                count1 = i + 1;
                arr[i] = 0;
            }
            else if (arr[i] == 2 && count2 == 0)
            {
                count2 = i + 1;
                arr[i] = 0;
            }
            else if (arr[i] == 3 && count3 == 0)
            {
                count3 = i + 1;
                arr[i] = 0;
            }
        }

        cout << count1 << " " << count2 << " " << count3 << endl;
        count1 = count2 = count3 = 0;
        id--;
    }
}