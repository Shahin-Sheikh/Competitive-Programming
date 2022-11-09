#include <bits/stdc++.h>
using namespace std;

void tr()
{
    int n, k, s, sub = 0, mul = 1;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
    }
    sub = n - k;
    mul = n * k;
    if (sub == 0 && mul == 1)
    {
        cout << "YES" << endl;
    }
    else if (sub == 0 && mul > 1)
    {
        cout << "NO" << endl;
    }
    else if (k > sub)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int tests;
    cin >> tests;
    for (int i = 1; i <= tests; i++)
    {
        cout << "Case #" << i << ": ";
        tr();
    }
    return 0;
}