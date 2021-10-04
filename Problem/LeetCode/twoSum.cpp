#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int nums[size];
    int target;
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}