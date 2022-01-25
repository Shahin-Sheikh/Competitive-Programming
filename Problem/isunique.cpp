#include <bits/stdc++.h>
using namespace std;

bool uniqueChar(string str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return false;
            }
        }
    }
}
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    if (uniqueChar(str))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}