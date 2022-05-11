#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ara[n];
    int ara3[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        ara3[i] = ara[i];
    }
    int x = sizeof(ara) / sizeof(ara[0]);
    sort(ara, ara + x);
    int ara2[n];
    for (int i = 0; i < n; i++)
    {
        ara2[i] = ara[i];
        cout << ara[i] << " ";
    }
    if (ara3 == ara2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}