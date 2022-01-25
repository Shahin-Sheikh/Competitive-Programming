#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int size;
    cin >> size;
    int element;
    int target;
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        nums.push_back(element);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i << "," << j;
            }
        }
    }

    return 0;
}