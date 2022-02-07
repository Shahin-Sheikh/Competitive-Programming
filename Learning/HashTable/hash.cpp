#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    unordered_map<char, int> list;
    for (int i = 0; i < str.length(); i++)
    {
        list[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (list.find(str[i]) != list.end())
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}