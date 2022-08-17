#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, temp_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            temp_sum += j;
        }
        sum = sum + temp_sum;
        temp_sum = 0;
    }
    cout << sum << endl;
    return 0;
}