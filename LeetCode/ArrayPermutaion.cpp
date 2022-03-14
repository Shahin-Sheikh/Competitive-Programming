#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    vector<int> nums2;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    for (int i = 0; i < size; i++)
    {
        int x = nums[i];
        nums2.push_back(nums[x]);
        cout << nums2[i] << " ";
    }
    return 0;
}