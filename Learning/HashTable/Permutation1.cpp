#include <bits/stdc++.h>
using namespace std;

bool Permutaion(string str, string str1)
{
    if (str.length() != str1.length())
    {
        return false;
    }
    int count[256] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
        cout << count[str[i]];
    }
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]--;
        cout << count[str1[i]];
        if (count[str1[i]] < 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    string str1;
    cin >> str;
    cin >> str1;
    if (Permutaion(str, str1))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}