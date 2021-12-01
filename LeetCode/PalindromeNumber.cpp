#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, temp, r, sum = 0;
    temp = x;
    while (x > 0)
    {
        r = x % 10;
        sum = sum * 10 + r;
        x = x / 10;
    }
    if (temp == sum)
        cout << "palindrome";
    else
        cout << "not palindrome";

    return 0;
}