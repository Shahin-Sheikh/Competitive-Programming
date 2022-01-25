// Best case scenario: O(n)
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 256;

bool uniqueChar(string str)
{

    if (str.length() > MAX_CHAR)
    {
        return false;
    }
    bool chars[MAX_CHAR] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (chars[str[i]] == true)
        {
            return false;
        }
        chars[str[i]] = true;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
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