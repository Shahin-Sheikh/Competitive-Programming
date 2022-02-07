#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ara[i] > ara[j] || ara[i] == ara[j])
            {
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}