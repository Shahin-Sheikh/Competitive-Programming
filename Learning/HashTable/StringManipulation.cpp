#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int space_count = 0, index, i = 0;
    for (i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            space_count++;
        }
    }
    index = n + space_count * 2;
    if (n < str.length())
    {
        str[n] = '\0';
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[index - 1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index = index - 3;
        }
        else
        {
            str[index - 1] = str[i];
            index--;
        }
    }
    return 0;
}