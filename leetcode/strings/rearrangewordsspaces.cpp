#include <bits\stdc++.h>
using namespace std;

string reorderSpaces(string text)
{
    vector<string> temp;

    int count_spaces = 0;
    string str = "";
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            count_spaces++;
            if (str.size() != 0)
            {
                temp.push_back(str);
                str = "";
            }
        }
        else
            str += text[i];
    }
    if (str.length() != 0)
        temp.push_back(str);
    str = "";

    int mxk = count_spaces / (temp.size() - 1);
    int rem = count_spaces % (temp.size() - 1);
    int k = 0;
    for (auto ch : temp)
    {
        str += ch;
        if (k != temp.size() - 1)
        {
            for (int i = 1; i <= mxk; i++)
                str += ' ';
        }
        k++;
    }

    for (int i = 1; i <= rem; i++)
        str += ' ';

    return str;
}

void increment(int **p)
{
    (**p)++;
}

int main()
{
    string text = "  this   is  a sentence ";
    // cout << reorderSpaces(text);
    int num = 10;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
    return 0;
}