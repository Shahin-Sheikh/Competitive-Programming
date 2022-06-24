#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == target)
            {
                cout << i << endl;
            }
            else if (nums[i] != target)
            {
                cout << -1 << endl;
            }
        }
    }
}