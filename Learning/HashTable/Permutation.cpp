// Worst case: O(n^2)
// Because of the quick sort algorithm,
// the worst case occurs
// Quick Sort: Time Complexity => O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string str1;
    cin >> str;
    cin >> str1;
    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end());
    if (str == str1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}