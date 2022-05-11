
#include <bits/stdc++.h>
using namespace std;

int check(int arr[], int n)
{

    if (n == 1 || n == 0)
        return 1;

    if (arr[n - 1] < arr[n - 2])
        return 0;

    return check(arr, n - 1);
}

int main()
{
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    if (check(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}
