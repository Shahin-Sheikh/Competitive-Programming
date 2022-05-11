#include <bits/stdc++.h>
#define l long long
using namespace std;

int main()
{
    int x, y;
    cin >> x;
    l ara[x], ara2[x];
    for (l i = 0; i < x; i++)
    {
        cin >> ara[i];
    }
    for (l i = 0; i < x; i++)
    {
        ara2[i] = ara[i];
    }

    bool flag = true;
    // Sorting the array
    sort(ara, ara + x);

    // Checking if the array is sorted in descending order
    for (int i = 0; i < x; i++)
    {
        if (ara[i] == ara2[i])
            flag = true;
        else
            flag = false;
    }

    // Printing the output
    if (flag == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}