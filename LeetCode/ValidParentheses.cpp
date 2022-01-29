#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' && str[n - 1] == ')' || str[i] == '{' && str[n - 1] == '}' || str[i] == '{' && str[n - 1] == ']')
        {
            cout << "true";
        }
        /* else if (str[i] == '(' && str[n - 1] == ')' && str[i] == '{' && str[n - 1] == '}' && str[i] == '{' && str[n - 1] == ']')
        {
            cout << "true";
        } */
        else
        {
            cout << "false";
        }
    }
    return 0;
}