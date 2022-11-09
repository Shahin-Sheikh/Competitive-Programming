// Output Format
// Print one line of output per case, denoting the minimal area of paper (in square inches) needed to wrap the blocks when they are stacked together.
// Sample Input
// 5
// 9
// 10
// 26
// 27
// 100
// Sample Output
// 30
// 34
// 82
// 54
// 130

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int y = a[i] + 1;
        int z = a[i] + 2;
        int x1 = 0;
        int y1 = 0;
        int z1 = 0;
        while (x % 2 == 0)
        {
            x1++;
            x = x / 2;
        }
        while (y % 2 == 0)
        {
            y1++;
            y = y / 2;
        }
        while (z % 2 == 0)
        {
            z1++;
            z = z / 2;
        }
        if (x1 <= y1 && x1 <= z1)
        {
            cout << x1 << endl;
        }
        else if (y1 <= x1 && y1 <= z1)
        {
            cout << y1 << endl;
        }
        else
        {
            cout << z1 << endl;
        }
    }
    return 0;
}
