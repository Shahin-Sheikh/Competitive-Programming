// Jewels and stones [leetcode problem 771] using hash map
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
    for (int i = 0; j[i] != '\0'; ++i)
    {
        ++mymap[j[i]];
    }
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (mymap.find(s[i]) != mymap.end())
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}