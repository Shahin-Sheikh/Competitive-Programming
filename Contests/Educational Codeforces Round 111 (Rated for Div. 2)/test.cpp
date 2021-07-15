//You perform the following operation until the string becomes empty: choose some consecutive substring of equal characters, erase it from the string and glue the remaining two parts together (any of them can be empty) in the same order. For example, if you erase the substring 111 from the string 111110, you will get the string 110. When you delete a substring of length l, you get a⋅l+b points.
//Your task is to calculate the maximum number of points that you can score in total, if you have to make the given string empty.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        int b = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == s[i])
            {
                a++;
            }
            else
            {
                b = a;
                break;
            }
        }
        max = max > b ? max : b;
    }
    cout << max << endl;
    return 0;
}
