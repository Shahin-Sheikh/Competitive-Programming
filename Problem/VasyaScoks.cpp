#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, sum = 0;
    cin >> n >> m;
    k = (n - 1) / (m - 1);
    sum = n + k;
    cout << sum;
    return 0;
}