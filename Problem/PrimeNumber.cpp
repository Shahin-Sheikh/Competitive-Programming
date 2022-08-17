#include <bits/stdc++.h>
using namespace std;

void tr()
{
    string str;
    cin >> str;
    int x;
    cin >> x;
    int flag = 0;
    int sum = 0, result = 0;
    for (int i = 0; i < str.length(); i++)
    {
        //cout << (int)str[i] << endl;
        sum = sum + (int)str[i] + x;
        for (int j = 2; j < sum; j++)
        {
            if (sum % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES\n";
            break;
        }
        else
        {
            cout << "NO\n";
            break;
        }
    }
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        tr();
    }
    return 0;
}