#include <bits/stdc++.h>
using namespace std;

int main()
{
    string j;
    string s;
    int count = 0;
    cin >> j;
    cin >> s;
    int n = j.length();
    int m = s.length();
    unordered_map<char, int> mymap;
    for (int i = 0; i < n; ++i)
    {
        ++mymap[j[i]];
    }
    for (int i = 0; i < m; ++i)
    {
        if (mymap.find(s[i]) != mymap.end())
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}