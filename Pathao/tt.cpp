// Encoding is the process of converting data from one form to another. There are different types of encoding techniques. RLE is a form of lossless data compression in which runs of data (sequences in which the same data value occurs in many consecutive data elements) are stored as a single data value and count, rather than as the original run. For example, the string "ABCD" would be encoded to "A1B1C1D1," in quotes for clarity. Here, we need to find decoded strings that were encoded using the above procedure.
//
// Input
// The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing a string S.
//
// Output
// For each test case, in a new line, print the decoded string.
//
// Constraints
// 1 <= T <= 100
// 1 <= |S| <= 100
//
// Example
// Input
// 3
// A12
// A1B1C1D1
// A3B2C1D2
//
// Output
// AAAAAAAAAAAA
// ABCD
// AAABBCDD
//
// Explanation
// Testcase 1: A12 means AAAAAAAAAAAA.
// Testcase 2: A1B1C1D1 means ABCD.
// Testcase 3: A3B2C1D2 means AAABBCDD.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                int x = s[i] - '0';
                for (int j = 0; j < x; j++)
                {
                    int temp = s[i - 1];
                    cout << s[i - 1];
                    if(temp > 9){
                        while(temp =! 0){
                            cout << s[i - 1];
                            temp--;
                        }
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}

