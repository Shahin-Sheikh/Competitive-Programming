#include <bits/stdc++.h>
using namespace std;

int dec_to_bin(int n)
{
    int n1 = 0;
    int cnt = 0;
    int rem;
    while (n > 0)
    {
        rem = n % 2;
        n1 = n1 + pow(10, cnt) * rem;
        n = n / 2;
        cnt++;
    }
    return n1;
}

int main()
{
    int n;
    cin >> n;
    cout << dec_to_bin(n);
    return 0;
}