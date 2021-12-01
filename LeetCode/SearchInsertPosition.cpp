#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums, target;
    cin >> nums >> target;
    vector<int> nums_vec(nums);
    for (int i = 0; i < nums; i++)
    {
        int x;
        cin >> x;
        nums_vec.push_back(x);
        if (nums_vec[x] == target)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}