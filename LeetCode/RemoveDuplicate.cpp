#include <bits/stdc++.h>
using namespace std;

/*int main()
{
    int n;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ara[i] == ara[j])
            {
                while (j < n)
                {
                    ara[j] = ara[j + 1];
                    j++;
                }
                n--;
            }
            else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ara[i] << " ";
    }
}*/

int main()
{
    class Solution
    {
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int count = 0;
            int n = nums.size();
            for (int i = 1; i < n; i++)
            {
                if (nums[i] == nums[i - 1])
                    count++;
                else
                    nums[i - count] = nums[i];
            }
            return n - count;
        }
    };
}